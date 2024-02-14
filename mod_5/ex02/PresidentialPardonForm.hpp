#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"


// ! PresidentialPardonForm: Required grades: sign 25, exec 5
// ! Informs that <target> has been pardoned by Zaphod Beeblebrox.

class PresidentialPardonForm : public AForm {
    
    private:
    // Attributs
    std::string _target;
    
    
    public:
    // Constructeur

    // ? AForm(const std::string &name, const int &gradeRequiredToSign, const int &gradeRequiredToExecute);
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &other);
    PresidentialPardonForm& operator=(PresidentialPardonForm &other);
    // Destructeur
    virtual ~PresidentialPardonForm();
    
    // Méthode héritée de AForm
    virtual void execForm(Bureaucrat &worker) const;
};

#endif // PRESIDENTIALPARDONFORM_HPP
