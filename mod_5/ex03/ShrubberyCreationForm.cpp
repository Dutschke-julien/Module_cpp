#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
    // Code du constructeur
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :AForm("ShrubberyCreationForm", 145, 137), _target(target){
    // Code du constructeur
    std:: cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    // Code du destructeur

    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execForm(Bureaucrat &worker) const {
    std::ofstream file;

    if (worker.getGrade() > this->getGradeRequiredToExecute())
    {
        throw AForm::GradeTooLowException();
    }
    if (!this->getIsSigned())
    {
        throw AForm::FormNotSignedException();
    }

    file.open((_target + "_shrubbery").c_str());

    if (file.is_open())
    {
        file << "     ccee88oo\n";
        file << "  C8O8O8Q8PoOb o8oo\n";
        file << " dOB69QO8PdUOpugoO9bD\n";
        file << "CgggbU8OU qOp qOdoUOdcb\n";
        file << "      6OuU  /p u gcoUodpP\n";
        file << "        \\\\\\//  /douUP\n";
        file << "          \\\\\\////\n";
        file << "           |||/\\\n";
        file << "           |||/|\\\n";
        file << "           ||||||\n";
        file << "   .....//||||||\\....\n";
        file.close();
        std::cout << "\033[1;34m ShrubberyCreationForm executed successfully!\033[0m\n";
    }
    else 
    {
        std::cerr << "Error opening file: " << _target << "_shrubbery" << std::endl;
    }
}
