#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>



class Bureaucrat
{
public:

    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw(){
                return "Grade too high";
            }
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw(){
                return "Grade too low";
            }
    };


    Bureaucrat(); // Constructor
    Bureaucrat(const std::string name, int grade); // Constructor with parameters
    ~Bureaucrat(); // Destructor
    Bureaucrat(const Bureaucrat&);//copy constructor;
    const std::string getName() const throw();
    void decrementGrade();
    void incrementGrade();
    int getGrade() const throw();
    void changeGrade(int grade);


private:
    const std::string _name;
    int _grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
