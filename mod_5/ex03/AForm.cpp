#include "AForm.hpp"

AForm::AForm(const std::string &name, const int &gradeRequiredToSign, const int &gradeRequiredToExecute) : _name(name), _isSigned(false) , _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute){
    
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw AForm::GradeTooLowException();

    std::cout << "AFORM constructor with ARGS called" << std::endl;
}

AForm::AForm() : _name("default"), _isSigned(false), _gradeRequiredToSign(150), _gradeRequiredToExecute(150){
    std::cout << "AFORM default constructor called" << std::endl;
}

AForm::~AForm(){
    std::cout << "AFORM destructor called" << std::endl;
}

void AForm::signForm(Bureaucrat &worker){
    if (worker.getGrade() > this->_gradeRequiredToSign)
        throw AForm::GradeTooLowException();
    this->_isSigned = true;
}


std::string AForm::getName() const{
    return this->_name;
}

bool AForm::getIsSigned() const{
    return this->_isSigned;
}

int AForm::getGradeRequiredToSign() const{
    return this->_gradeRequiredToSign;
}

int AForm::getGradeRequiredToExecute() const {
    return this->_gradeRequiredToExecute;
}

std::ostream &operator<<(std::ostream &out, const AForm &form){
    out << "AFORM " << form.getName() << " requires grade " <<
     form.getGradeRequiredToSign() << " to sign and grade " <<
     form.getGradeRequiredToExecute() << " to execute";
    return out;
}