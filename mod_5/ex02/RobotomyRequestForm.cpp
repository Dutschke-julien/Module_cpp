#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), _target(target) {
    std::cout << "constructor call\n";
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("default") {
    std::cout << "constructor call\n";
}


RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "destructor call";
}

void RobotomyRequestForm::execForm(Bureaucrat &worker) const {
    if (worker.getGrade() > this->getGradeRequiredToExecute())
        throw AForm::GradeTooLowException();
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();

    std::srand(std::time(0));

    int resultat = std::rand() % 2;

    if (resultat == 0) {
    std::cout << "\033[1;31m" << this->_target << " Has Been robotomized\n\033[0m";
    } 
    else {
    std::cout << "\033[1;31m" << "Oupsi fail\n\033[0m";
    }
}
