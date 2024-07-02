# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makanji <makanji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 21:46:55 by makanji           #+#    #+#              #
#    Updated: 2024/07/02 22:01:51 by makanji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Find all source files recursively in current directory
SRC =   ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
        ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
        ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_toupper.c \
        ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
        ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
        ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
        ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c

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