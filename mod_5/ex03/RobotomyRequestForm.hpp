#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

//! RobotomyRequestForm: Required grades: sign 72, exec 45
//! Makes some drilling noises. Then, informs that <target> has been robotomized
//! successfully 50% of the time. Otherwise, informs that the robotomy failed.

class RobotomyRequestForm : public AForm {
    
    private:
    // Attributs
    std::string _target;
    
    
    public:
    // Constructeur
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm &other);
    RobotomyRequestForm& operator=(RobotomyRequestForm &other);
    // Destructeur
    virtual ~RobotomyRequestForm();
    
    // Méthode héritée de AForm
    virtual void execForm(Bureaucrat &worker) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP
