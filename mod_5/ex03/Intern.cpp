#include "Intern.hpp"


Intern::Intern(){
    std::cout << "constructor for Intern\n";
    formCreators[0] = &Intern::createRobotomyRequestForm;
    formCreators[1] = &Intern::createPresidentialPardonForm;
    formCreators[2] = &Intern::createRobotomyRequestForm;

    formNames[0] = "robotomy request";
    formNames[1] = "president request";
    formNames[2] = "Shrubbery request";

    

}

Intern::~Intern(){
    std::cout << "destructor for Intern\n";
}



AForm* Intern::makeForm(std::string Form, std::string target)
{
    for(int i = 0; i < 3; i++)
    {
        if (formNames[i] == Form)
        return (this->*formCreators[i])(target);
    }
    return (NULL);
}

AForm* Intern::createRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialPardonForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubberyCreationForm(std::string target) {
    return new RobotomyRequestForm(target);
}

Intern &Intern::operator=(Intern &other) {
    if (this != &other) {
        for (int i = 0; i < 3; i++) {
            this->formCreators[i] = other.formCreators[i];
            this->formNames[i] = other.formNames[i];
        }
    }
    return *this;
}

Intern::Intern(Intern &other) : Intern(){
}