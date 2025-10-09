CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
INCLUDE = includes
NAME = libft.a
OBJS = $(SRCS:%.c=$(SRCS_DIR)/%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $(OBJS)

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
