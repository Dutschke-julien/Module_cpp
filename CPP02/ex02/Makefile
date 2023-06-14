# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 16:31:26 by event             #+#    #+#              #
#    Updated: 2023/06/08 16:24:37 by jdutschk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Exec

CC = c++ 

CFLAGS = -Wall -Werror -Wextra -std=c++98 -o 

FILES = main.cpp\
		Fixed.cpp\




OBJS = $(FILES:.cpp=.o)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(NAME) $(OBJS) 


all : $(NAME)

clean : 

	rm -rf $(OBJS)


fclean : clean
		rm -rf $(NAME)


re : fclean all