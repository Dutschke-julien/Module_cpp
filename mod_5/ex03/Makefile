EXEC = My_dream_job

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp Intern.cpp
	   

OBJS = $(SRCS:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all
