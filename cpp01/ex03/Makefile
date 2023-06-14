# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 16:31:26 by event             #+#    #+#              #
#    Updated: 2023/05/08 13:44:07 by jdutschk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = more_brainz

CC = c++ 

CFLAGS = -Wall -Werror -Wextra -std=c++98 -o 

FILES = main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp





OBJS = $(FILES:.cpp=.o)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(NAME) $(OBJS) 
		@echo "Object + Executable created"


all : $(NAME)

clean : 

	rm -rf $(OBJS)


fclean : clean
		rm -rf $(NAME)

g :
	./$(NAME)


re : fclean all
