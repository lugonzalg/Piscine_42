NAME = bsq
OBJ_FILES = main.o ft_manage_files_1.o ft_manage_files_2.o ft_manage_files_3.o ft_2check.o ft_algoritm.c ft_controwcolum.c ft_find_square.c
HEADER_FILES = ft_header.h
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) -o $@ $^

%.o: %.c $(HEADER_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
