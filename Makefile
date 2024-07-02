# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makanji <makanji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 21:46:55 by makanji           #+#    #+#              #
#    Updated: 2024/06/25 19:15:50 by makanji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Find all source files recursively in current directory
SRC := $(wildcard *.c) $(wildcard */*.c) $(wildcard */*/*.c)

# Define object files by replacing .c with .o
OBJ := $(SRC:.c=.o)

# Compiler flags
CFLAGS = -Wall -Werror -Wextra

# Compilation command
COMPILE = gcc $(CFLAGS) -c

# Archive command
LIB = ar rcs $(NAME)

# Remove command
REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@$(LIB) $(OBJ)

%.o: %.c
	$(COMPILE) $< -o $@

clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

so:
	gcc -fPIC $(SRC) -shared -o libft.so

.PHONY: all clean fclean re so