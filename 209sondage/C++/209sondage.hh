//
// 209sondage.hh for  in /home/viterb_c/rendu/209sondage/C++
// 
// Made by CHARLES VITERBO
// Login   <viterb_c@epitech.net>
// 
// Started on  Sun Jun  7 12:00:02 2015 CHARLES VITERBO
// Last update Sun Jun  7 16:37:41 2015 CHARLES VITERBO
//

#ifndef SONDAGE_HH_
# define SONDAGE_HH_

# include <iostream>
# include <iomanip>
# include <math.h>
# include "Exceptions.hh"


# define USAGE	"./209sondage population echantillon vote !"

class sondage
{
private:
  int	m_population;
  int	m_echantillon;
  float	m_vote;
  float	m_variance;
  float	m_amp95;
  float	m_amp99;

private:
  sondage();
  sondage(sondage const &);
  sondage	&operator=(sondage const &);

  public:
  sondage(int, int, float);
  ~sondage();

  // Getter
  int	getPopulation() const	{ return m_population; }
  int	getEchantillon() const	{ return m_echantillon; }
  float	getVote() const	{ return m_vote; }
  float	getVariance() const	{ return m_variance; }
  float	getAmp95() const	{ return m_amp95; }
  float	getAmp99() const	{ return m_amp99; }

  // Calculs
  void	calculVariance();
  void	calculAmp();
};

std::ostream	&operator<<(std::ostream &, sondage const &);

#endif /* !SONDAGE_HH_ */
