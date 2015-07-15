//
// 209sondage.cpp for  in /home/viterb_c/rendu/209sondage/C++
// 
// Made by CHARLES VITERBO
// Login   <viterb_c@epitech.net>
// 
// Started on  Sun Jun  7 16:34:08 2015 CHARLES VITERBO
// Last update Sun Jun  7 17:41:16 2015 CHARLES VITERBO
//

# include "209sondage.hh"

sondage::sondage(int population, int echantillon, float vote) : m_population(population), m_echantillon(echantillon), m_vote(vote), m_variance(0), m_amp95(0), m_amp99(0) {
  if (this->m_population < 1 || this->m_echantillon < 1)
    throw Error("Population and echantillon must be superior to 1 !");
  if (this->m_population < this->m_echantillon)
    throw Error("Population must be superior to echantillon !");
  if (this->m_vote < 0)
    throw Error("Vote must be superior to 0 !");
}

sondage::~sondage()	{
}

void	sondage::calculVariance()	{
  float p = this->m_vote / 100;
  float var = p * (1 - p);
  this->m_variance = var / this->m_echantillon * (this->m_population - this->m_echantillon) / (this->m_population - 1.0);
}

void	sondage::calculAmp()	{
  this->m_amp95 = 1.96 * sqrt(this->m_variance) * 100;
  this->m_amp99 = 2.58 * sqrt(this->m_variance) * 100;
}

std::ostream	&operator<<(std::ostream &os, sondage const &sond)	{
  os << "taille de la population :\t " << sond.getPopulation() << std::endl;
  os << "taille de l'echantillon :\t " << sond.getEchantillon() << std::endl;
  os << "resultat du sondage :\t \t " << sond.getVote() << std::endl;
  os << std::setprecision(3);
  os << "variance estimee :\t \t " << sond.getVariance() << std::endl;
  os << std::setprecision(4);
  os << "intervalle de confiance a 95% : [" << sond.getVote() - sond.getAmp95() << "% ; " << sond.getVote() + sond.getAmp95() << "%]" << std::endl;
  os << "intervalle de confiance a 99% : [" << sond.getVote() - sond.getAmp99() << "% ; " << sond.getVote() + sond.getAmp99() << "%]" << std::endl;
  return os;
}
