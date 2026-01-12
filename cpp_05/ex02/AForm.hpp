#pragma once

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
	public:
		AForm(const std::string _name, const int signGrade, const int execGrade);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();
		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat &bureaucrat);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int execGrade;
};

std::ostream &operator<<(std::ostream &out, const AForm &form);