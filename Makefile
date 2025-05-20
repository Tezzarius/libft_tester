NAME = libfttester.a

LIBFT_DIR = ../

LIBFT = $(LIBFT_DIR)/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

HEADER = libft_tester.h

SRC = 	helperfunctions.c\
		Libcis.c\
		Libcmem.c\
		Libcstr.c\
		Libcrest.c\
		additional.c\

OBJ = $(SRC:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJ) $(LIBFT) 
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
