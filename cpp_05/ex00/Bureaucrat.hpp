#pragma once

#include <iostream>
#include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(const std::string Name, int Grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();
		void increment();
		void decrement();
		std::string getName() const;
		int getGrade() const;
	private:
		const std::string name;
		int grade;
	
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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);