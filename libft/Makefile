# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfelguei <tfelguei@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 18:47:14 by tfelguei          #+#    #+#              #
#    Updated: 2024/04/12 20:04:39 by tfelguei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS := $(wildcard ./*.c)

OBJS := $(SRCS:.c=.o)

comp:
	cc -Wextra -Wall -Werror -c $(SRCS) -o $(OBJS)

all: $(NAME)

$(NAME): comp
	ar rcs ./$(NAME) $(OBJS)

clean:	
	rm -f ./$(OBJS)

fclean: clean	
	rm -f ./$(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus