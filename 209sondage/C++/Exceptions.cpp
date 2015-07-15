//
// Exceptions.cpp for Exceptions in /home/chenev_d/rendu/abstract
// 
// Made by Alexandre Chenevier
// Login   <chenev_d@epitech.net>
// 
// Started on  Thu Feb 12 12:33:04 2015 Alexandre Chenevier
// Last update Sun Mar  1 21:16:19 2015 CHARLES VITERBO
//

#include <iostream>

#include "Exceptions.hh"

Error::Error(std::string const &message) : _message(message){}

const char *Error::what() const throw(){
  return (_message.c_str());
}
