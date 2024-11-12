
NAME = libftprintf.a
SRC = prinft_string.c	printf_char.c	printf_nbr.c	printf_hex.c \	    printf_unsg.c
CC = cc
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
	
all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rf - r $(OBJ) 

fclean : clean
	rf - r $(NAME)

re: clean all

.PHONY: all
