# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:23:17 by carmart2          #+#    #+#              #
#    Updated: 2024/01/22 16:48:13 by carmart2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS= -Wall -Wextra -Werror
AR=ar -rcs

SRCS = ft_atoi.c ft_strlen.c

OBJS = $(addprefix ./build/, ${SRCS:.c=.o})

all: $(NAME)	

$(NAME): $(OBJS)
	 $(AR) $(NAME) $(OBJS)

./build/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build/

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re 




	
