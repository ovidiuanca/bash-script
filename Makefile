NAME = run

SRCS = srcs/*.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I includes/ $(SRCS)
	mv a.out run

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
