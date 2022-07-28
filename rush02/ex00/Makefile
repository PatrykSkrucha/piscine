NAME = rush-02
SRC = main.c cut.c
FLAGS = -Wall -Wextra -Werror
all: $(NAME)
RM = /bin/rm -f
$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)
clean:
	$(RM) rush-02.o
fclean: clean
		$(RM) $(NAME)