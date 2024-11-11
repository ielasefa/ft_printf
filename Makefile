
CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
all = $(NAME)

clean = rf - f 

fclean = rf -f

re = clean fclean

.PHONY = all
