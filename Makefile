NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = -L. -lft

SRCS = $(filter-out main.c, $(wildcard *.c))
OBJS = $(SRCS:.c=.o)

all: $(NAME) main

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) program $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

main: libft.a
	$(CC) $(CFLAGS) main.c $(LIBFT) -o program
