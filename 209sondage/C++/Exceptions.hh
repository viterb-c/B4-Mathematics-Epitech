//
// Exceptions.hh for  in /home/viterb_c/rendu/209sondage/C++
// 
// Made by CHARLES VITERBO
// Login   <viterb_c@epitech.net>
// 
// Started on  Sun Jun  7 14:44:46 2015 CHARLES VITERBO
// Last update Sun Jun  7 14:44:48 2015 CHARLES VITERBO
//

#ifndef	EXCEPTIONS_HH_
# define EXCEPTIONS_HH_

#include <string>
#include <exception>

class Error: public std::exception
{
public:
  Error(std::string const &message);
  virtual ~Error() throw(){}
  const char *what()const throw();
protected:
  std::string _message;
};

#endif /* !EXCEPTIONS_HH_ */
