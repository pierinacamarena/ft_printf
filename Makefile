# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcamaren <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 15:30:40 by pcamaren          #+#    #+#              #
#    Updated: 2021/09/08 18:23:09 by pcamaren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC		= 	ft_printf.c \
				src/ft_handle_input.c \
				src/ft_helper_func.c \
				src/ft_treat_char.c \
				src/ft_treat_hexa.c \
				src/ft_treat_numbers.c \
				src/ft_treat_pointer.c \
				src/ft_treat_str.c \
				src/ft_treat_uint.c \
				src/ft_utils.c \

OBJ		= $(SRC:.c=.o)

CC		= gcc

FLAGS	= -Werror -Wall -Wextra

RM		= rm -f

all :			$(NAME)

$(NAME) :		$(OBJ)
				ar rc $(NAME) $(OBJ)

%.o:%.c			ft_printf.h
				$(CC) $(FLAGS) -c $< -o $@

clean :
				$(RM) $(OBJ)

fclean :		clean
				$(RM) $(NAME)

re :			fclean all

.PHONY : clean fclean all re
