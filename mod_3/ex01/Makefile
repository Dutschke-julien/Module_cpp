# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 16:31:26 by event             #+#    #+#              #
#    Updated: 2023/06/28 15:42:21 by jdutschk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Exec

TARGET = -o $(NAME)

CC = c++ 

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

FILES = main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\




OBJS = $(FILES:.cpp=.o)

$(NAME) : $(OBJS)
		$(CC) $(CXXFLAGS) $(TARGET) $(OBJS) 


all : $(NAME)

clean : 

	rm -rf $(OBJS)


fclean : clean
		rm -rf $(NAME)


re : fclean all