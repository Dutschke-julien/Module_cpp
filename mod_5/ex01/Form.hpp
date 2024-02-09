#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
private:
    const std::string _name;
    bool      _isSigned;
    const int _gradeRequiredToSign;
    const int _gradeRequiredToExecute;

public:
    // Constructor

    class FormNotSignedException : public std::exception {
        public:
        virtual const char* what() const throw(){
            return "Form not signed";
        }
    };

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


    Form();
    Form(const std::string &name, const int &gradeRequiredToSign, const int &gradeRequiredToExecute);
    ~Form();
    
    // Accessors
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;

    void signForm(Bureaucrat &worker);
    void execForm(Bureaucrat &worker);

    // Other member functions and accessors
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif // FORM_HPP
