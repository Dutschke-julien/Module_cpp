#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm {


protected:
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


    AForm();
    AForm(const AForm &other);
    AForm& operator=(const AForm &other);
    AForm(const std::string &name, const int &gradeRequiredToSign, const int &gradeRequiredToExecute);
    virtual ~AForm();
    
    // Accessors
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;

    void beSigned(Bureaucrat &worker);
    virtual void execForm(Bureaucrat &worker) const = 0;

    // Other member functions and accessors
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif // FORM_HPP
