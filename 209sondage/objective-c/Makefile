CC = gcc
SOURCES= main.m
FRAMEWORKS:= -framework Foundation
LIBRARIES:= -lobjc
CFLAGS=-Wall -Werror -g -v $(SOURCES)
LDFLAGS=$(LIBRARIES) $(FRAMEWORKS)
OUT=-o 209sondage

all: $(SOURCES) $(OUT)

$(OUT): $(OBJECTS)
		@$(CC) -o $(OBJECTS) $@ $(CFLAGS) $(LDFLAGS) $(OUT)

.m.o:
		@$(CC) -c -Wall $< -o $@

clean:
		@rm -rf 209sondage.dSYM

fclean: clean
		@rm -f 209sondage

re: fclean all

.PHONY: all clean fclean re
