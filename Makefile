##
## EPITECH PROJECT, 2024
## palindrome
## File description:
## Makefile
##

NAME	=	palindrome

CC	=	gcc

SRC	=	src/format_check.c	\
		src/palindrome.c	\
		src/my_put.c	\
		src/main.c	\

TESTSRC	=	tests/my_test.c	\
		src/format_check.c	\
		src/palindrome.c	\
		src/my_put.c	\

OBJ	=	$(SRC:.c=.o)

TESTOBJ	=	$(TESTSRC:.c=.o)

CFLAGS	=	-I./include/ -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@rm -f $(OBJ)
	@rm -f $(TESTOBJ)
	@find . -name "*.gcda" -delete -o -name "*.gcno" -delete

fclean:	clean
	@rm -f $(NAME)
	@rm -f unit_tests

unit_tests:	CFLAGS += -lcriterion --coverage -g3
unit_tests:	fclean $(TESTOBJ)
	@$(CC) -o unit_tests $(TESTOBJ) $(CFLAGS)

re:	fclean all

.PHONY: all clean fclean unit_tests re
