# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 18:25:47 by wmozella          #+#    #+#              #
#    Updated: 2021/10/22 19:20:57 by wmozella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

C_FILES =		ft_isalnum.c			ft_isalpha.c			ft_isascii.c\
				ft_isdigit.c			ft_isprint.c			ft_memset.c\
				ft_strlen.c				ft_tolower.c			ft_toupper.c\
				ft_bzero.c				ft_strchr.c				ft_strrchr.c\
				ft_strncmp.c			ft_memcmp.c				ft_memchr.c\
				ft_memmove.c			ft_memcpy.c				ft_strlcpy.c\
				ft_strlcat.c			ft_calloc.c				ft_atoi.c\
				ft_strnstr.c			ft_strdup.c				ft_putchar_fd.c\
				ft_putstr_fd.c			ft_putendl_fd.c			ft_itoa.c\
				ft_putnbr_fd.c			ft_substr.c				ft_strjoin.c\
				ft_strtrim.c			ft_strmapi.c			ft_split.c\
				ft_striteri.c

C_BONUS =		ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c

OBJ = $(patsubst %.c,%.o,$(C_FILES))
OBJ_BONUS = $(C_BONUS:%.c=%.o)

CC = gcc
FLAGS = -Wall -Werror -Wextra -I$(HEADER)

.PHONY : all clean fclean re bonus

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus :
	make OBJ="$(OBJ_BONUS)" all

clean :
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all