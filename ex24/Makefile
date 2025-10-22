LIBFT = libft.a
COMP = cc
FLAGS = -Wall -Wextra -Werror
FUNCTIONS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCLUDE = includes
OBJ = $(FUNCTIONS:.c=.o)

all: $(LIBFT)

$(LIBFT): $(OBJ)
	ar -rcs $(LIBFT) $(OBJ)

.c.o: 
	$(COMP) $(FLAGS) -I $(INCLUDE) -c $< -o $@
	 
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(LIBFT)
re: fclean all
