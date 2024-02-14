#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>


// ! ShrubberyCreationForm: Required grades: sign 145, exec 137
// ! Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// ! inside it.

class ShrubberyCreationForm : public AForm {
    
    private:
    // Attributs
    std::string _target;
    
    
    public:
    // Constructeur
    // ? AForm(const std::string &name, const int &gradeRequiredToSign, const int &gradeRequiredToExecute);
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm &other);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm &other);
    // Destructeur
    virtual ~ShrubberyCreationForm();
    
    // Méthode héritée de AForm
    virtual void execForm(Bureaucrat &worker) const;
};

#endif // SHRUBBERYCREATIONFORM_HPP
