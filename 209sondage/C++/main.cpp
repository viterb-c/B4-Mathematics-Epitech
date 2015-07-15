//
// main.cpp for  in /home/viterb_c/rendu/209sondage/C++
// 
// Made by CHARLES VITERBO
// Login   <viterb_c@epitech.net>
// 
// Started on  Sun Jun  7 16:25:46 2015 CHARLES VITERBO
// Last update Sun Jun  7 17:09:32 2015 CHARLES VITERBO
//

# include "209sondage.hh"
# include "Convertion.hpp"

int	main(int argc, char **argv)	{
  if (argc != 4)	{
    std::cerr << USAGE << std::endl;
    return 1;
  }
  try	{
    int	population = StringToNumber<int>(argv[1]);
    int	echantillon = StringToNumber<int>(argv[2]);
    float vote = StringToNumber<float>(argv[3]);
    sondage	calcul(population, echantillon, vote);
    calcul.calculVariance();
    calcul.calculAmp();
    std::cout << calcul;
  }
  catch (Error const &e)	{
    std::cerr << "Error : " << e.what() << std::endl;
  }
  return 0;
}
