##
## Makefile for  in /home/viterb_c/rendu/209sondage/C++
## 
## Made by CHARLES VITERBO
## Login   <viterb_c@epitech.net>
## 
## Started on  Sun Jun  7 16:13:51 2015 CHARLES VITERBO
## Last update Sun Jun  7 17:09:41 2015 CHARLES VITERBO
##

CC	= g++

RM	= rm -f

CFLAGS	= -W -Wall -Werror

NAME	= 209sondage

SRCS	= main.cpp \
	  209sondage.cpp \
	  Exceptions.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
