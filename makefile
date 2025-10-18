CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = program
$(NAME) : ft_*.c
	$(CC) $(CFLAGS)  ft_*.c -o $(NAME)
clean :
	rm -f $(NAME)
	