# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-f <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 14:37:24 by jrocha-f          #+#    #+#              #
#    Updated: 2024/04/19 11:52:01 by jrocha-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
       ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
       ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
       ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
       ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
       ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

BONUS_SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
       ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
       ft_lstnew.c ft_lstsize.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: bonus_target

bonus_target: $(NAME) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	touch bonus_target

clean:
	rm -f $(OBJ) $(BONUS_OBJ) bonus_target

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re bonus