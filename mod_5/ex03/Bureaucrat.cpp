/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:46:20 by jdutschk          #+#    #+#             */
/*   Updated: 2024/02/12 18:24:52 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::signForm(AForm &form)
{
    if (this->_grade > form.getGradeRequiredToSign())
        throw Bureaucrat::GradeTooLowException();
    form.beSigned(*this);
}

void Bureaucrat::incrementGrade(){
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade(){
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void Bureaucrat::changeGrade(int grade){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

const std::string Bureaucrat::getName() const{
    return _name;
}

int Bureaucrat::getGrade() const{
    return _grade;
}

Bureaucrat::Bureaucrat() : _name("Don't Care About Names!, just give me my coffee!"), _grade(75){
    // Constructor implementation
    std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
    // Constructor implementation
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
    std::cout << "Bureaucrat parameterized constructor called for " << _name << "\n";
}


Bureaucrat::~Bureaucrat(){ 
    // Destructor implementation
    std::cout << "Bureaucrat destructor called for " << _name << "\n";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "\n";
    return out;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade){
    //copy contructor implementation
    std::cout << "Bureaucrat copy constructor called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src){
    if (this != &src)
        _grade = src._grade;
    return *this;
}