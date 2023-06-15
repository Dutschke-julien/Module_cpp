# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 16:31:26 by event             #+#    #+#              #
#    Updated: 2023/05/09 16:38:31 by jdutschk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CC = c++ 

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -o 

FILES = main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp




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
