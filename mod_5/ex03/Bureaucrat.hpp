#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

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

    Bureaucrat();
    void signForm(AForm &form);
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat&);
    Bureaucrat& operator=(const Bureaucrat&); // Assignment operator


    const std::string getName() const;
    void decrementGrade();
    void incrementGrade();
    int getGrade() const;
    void changeGrade(int grade);

private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
