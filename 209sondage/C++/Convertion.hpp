//
// Convertion.hpp for  in /home/viterb_c/rendu/209sondage/C++
// 
// Made by CHARLES VITERBO
// Login   <viterb_c@epitech.net>
// 
// Started on  Sun Jun  7 14:43:42 2015 CHARLES VITERBO
// Last update Sun Jun  7 14:44:13 2015 CHARLES VITERBO
//

#ifndef _CONVERTION_HPP_
# define _CONVERTION_HPP_

#include <sstream>
#include <string>

template <typename T>
T	StringToNumber(std::string  const &toconvert)
{
  std::stringstream	ss(toconvert);
  T	result;

  if (!(ss >> result))
    throw Error("Underflow or Overflow during creation Operande !");
  return (result);
}

#endif /* !_CONVERTION_HPP_ */
