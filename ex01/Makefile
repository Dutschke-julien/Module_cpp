# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 11:02:25 by jdutschk          #+#    #+#              #
#    Updated: 2023/07/06 17:15:09 by jdutschk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Exec

CXX = c++

CXXFLAGS = -g3 -Wall -Werror -Wextra -std=c++98

FILES = main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp\
		Brain.cpp

OBJS = $(FILES:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
