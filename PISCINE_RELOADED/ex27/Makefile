OBJS = (ft_display_file.c=ft_display_file.o)

all : ft_display_file.o
	cc -Wall -Werror -Wextra ft_display_file.o  -o ft_display_file

ft_display_file.o : ft_display_file.c
	cc -Wall -Werror -Wextra -c ft_display_file.c -o ft_display_file.o

clean :
	rm -f ft_display_file.o

fclean: clean
	rm -f ft_display_file

re: fclean all

.PHONY: all clean fclean re
