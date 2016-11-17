NAME = libft.a

FLAG = -Wall -Wextra -Werror

SRCNOMS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c

SRC = $(SRCNOMS:%=$(SRCDIR)/%)

SRCDIR = srcs
OBJDIR = obj

OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

INC = includes

all: $(NAME)

$(OBJDIR):
	mkdir obj

$(NAME): $(OBJ)
	 ar -rc $(NAME) $(OBJ)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(OBJDIR)
	gcc -o $@ -c $(FLAG) $< -I $(INC)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
