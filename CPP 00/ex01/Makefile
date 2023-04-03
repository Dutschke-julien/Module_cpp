# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <event@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 16:31:26 by event             #+#    #+#              #
#    Updated: 2023/03/30 16:56:13 by event            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =   My_Awesome_PhoneBook

CC = c++ 

CFLAGS = -Wall -Werror -Wextra -std=c++98 -o 

FILES = main.cpp\
		Phonebook.cpp\
		Contact.cpp\
		utils.cpp



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
	./My_Awesome_PhoneBook


re : fclean all