#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

enum FormType {
    ROBOTOMY_REQUEST,
    PRESIDENTIAL_PARDON,
    SHRUBBERY_CREATION
};

class Intern
{
private:
    std::string   _form_types[3];
public:
    Intern();
    ~Intern();
    // Member functions
    AForm* makeForm(std::string name, std::string target);
    // Exceptions
    class FormNotFoundException : public std::exception {
        virtual const char* what() const throw();
    };
};
#endif /* ********************************************************** INTERN_H */
