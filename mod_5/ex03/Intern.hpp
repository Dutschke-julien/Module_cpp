#ifndef INTERN_HPP
#define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    private:
    typedef AForm* (Intern::*FormCreator)(std::string);
    FormCreator formCreators[3];
    std::string formNames[3];
    AForm* createRobotomyRequestForm(std::string target);
    AForm* createPresidentialPardonForm(std::string target);
    AForm* createShrubberyCreationForm(std::string target);

    public:
    Intern();
    ~Intern();
    AForm* makeForm(std::string Form, std::string target);
};

#endif // INTERN_HPP
