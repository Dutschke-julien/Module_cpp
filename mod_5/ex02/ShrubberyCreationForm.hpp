#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    
    private:
    // Attributs
    std::string _target;
    
    
    public:
    // Constructeur
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    
    // Destructeur
    virtual ~ShrubberyCreationForm();
    
    // Méthode héritée de AForm
    virtual void execForm(Bureaucrat &worker) const;
};

#endif // SHRUBBERYCREATIONFORM_HPP
