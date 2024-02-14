#include "Form.hpp"

Form::Form(const std::string &name, const int &gradeRequiredToSign, const int &gradeRequiredToExecute) : _name(name), _isSigned(false) , _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute){
    
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw Form::GradeTooLowException();

    std::cout << "Form constructor  with ARGS called" << std::endl;
}

Form::Form() : _name("default"), _isSigned(false), _gradeRequiredToSign(150), _gradeRequiredToExecute(150){
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeRequiredToSign(other._gradeRequiredToSign), _gradeRequiredToExecute(other._gradeRequiredToExecute) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(){
    std::cout << "Form destructor called" << std::endl;
}


Form& Form::operator=(const Form &other) {
    if (this != &other) {
        this->_isSigned = other._isSigned;
    }
    std::cout << "Form assignment operator called" << std::endl;
    return *this;
}

void Form::beSigned(Bureaucrat &worker){
    if (worker.getGrade() > this->_gradeRequiredToSign)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
}

void Form::execForm(Bureaucrat &worker){
    if (worker.getGrade() > this->_gradeRequiredToExecute)
        throw Form::GradeTooLowException();
    if (!this->_isSigned)
        throw Form::FormNotSignedException();
    std::cout << "Form " << this->_name << " has been executed" << std::endl;
}


std::string Form::getName() const{
    return this->_name;
}

bool Form::getIsSigned() const{
    return this->_isSigned;
}

int Form::getGradeRequiredToSign() const{
    return this->_gradeRequiredToSign;
}

int Form::getGradeRequiredToExecute() const {
    return this->_gradeRequiredToExecute;
}

std::ostream &operator<<(std::ostream &out, const Form &form){
    out << "Form " << form.getName() << " requires grade " <<
     form.getGradeRequiredToSign() << " to sign and grade " <<
     form.getGradeRequiredToExecute() << " to execute";
    return out;
}

