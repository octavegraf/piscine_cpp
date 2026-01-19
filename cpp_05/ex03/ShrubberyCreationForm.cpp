#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) : AForm("ShrubberyCreationForm", 145, 137), target(_target)
{
	#ifdef DEBUG
		std::cout << "ShrubberyCreationForm constructor called." << std::endl;
	#endif
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
	#ifdef DEBUG
		std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	#endif
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	#ifdef DEBUG
		std::cout << "ShrubberyCreationForm assignment operator called." << std::endl;
	#endif
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	#ifdef DEBUG
		std::cout << "ShrubberyCreationForm destructor called." << std::endl;
	#endif
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (getIsSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw AForm::GradeTooLowException();
	std::ofstream file;
	file.exceptions(std::ofstream::failbit | std::ofstream::badbit);
	{
		try
		{
			file.open((target + "_shrubbery").c_str(), std::ios::app);
			//std::ios::app Append at the end of the file
			file << "                                               ." << std::endl;
			file << "                                    .         ;  " << std::endl;
			file << "       .              .              ;%     ;;   " << std::endl;
			file << "         ,           ,                :;%  %;   " << std::endl;
			file << "          :         ;                   :;%;'     .,   " << std::endl;
			file << " ,.        %;     %;            ;        %;'    ,;" << std::endl;
			file << "   ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
			file << "    %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
			file << "     ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
			file << "      `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
			file << "       `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
			file << "          `:%;.  :;bd%;          %;@%;'" << std::endl;
			file << "            `@%:.  :;%.         ;@@%;'   " << std::endl;
			file << "              `@%.  `;@%.      ;@@%;         " << std::endl;
			file << "                `@%%. `@%%    ;@@%;        " << std::endl;
			file << "                  ;@%. :@%%  %@@%;       " << std::endl;
			file << "                    %@bd%%%bd%%:;     " << std::endl;
			file << "                      #@%%%%%:;;" << std::endl;
			file << "                      %@@%%%::;" << std::endl;
			file << "                      %@@@%(o);  . '         " << std::endl;
			file << "                      %@@@o%;:(.,'         " << std::endl;
			file << "                  `.. %@@@o%::;         " << std::endl;
			file << "                     `)@@@o%::;         " << std::endl;
			file << "                      %@@(o)::;        " << std::endl;
			file << "                     .%@@@@%::;         " << std::endl;
			file << "                     ;%@@@@%::;.          " << std::endl;
			file << "                    ;%@@@@%%:;;;. " << std::endl;
			file << "                ...;%@@@@@%%:;;;;,. " << std::endl;
			// Source: https://ascii.co.uk/art/tree
			file.close();
		}
		catch (const std::ofstream::failure &e)
		{
			std::cerr << e.what() << std::endl;
			return ;
		}
	}
	#ifdef DEBUG
		std::cout << "ShrubberyCreationForm executed by " << executor.getName() << "." << std::endl;
	#endif
}
