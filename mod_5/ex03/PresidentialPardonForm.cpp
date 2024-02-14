#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5), _target("Moulinette"){
    //constructor
    std::cout << "PresidentialPardonForm Constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Default", 25, 5), _target(target){
    // Constructor implementation
    std::cout << "PresidentialPardonForm Constructor with arg\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
    // Destructor implementation
    std::cout << "destructor call for Presidential form\n";
}

void PresidentialPardonForm::execForm(Bureaucrat &worker)const {
    if (this->_isSigned == false)
        throw AForm::FormNotSignedException();
    else if (worker.getGrade() > 5)
        throw AForm::GradeTooLowException();
    
    std::cout << "\033[1;32m" << this->_target << " has been pardoned by Zaphod Beeblebrox.\033[0m\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm(other._name, other._gradeRequiredToSign, other._gradeRequiredToExecute), _target(other._target){
    // Copy constructor implementation
    std::cout << "PresidentialPardonForm copy constructor\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &other) {
    // Operator= implementation
    if (this != &other) {
        this->_isSigned = other._isSigned;
    }
    return *this;
}