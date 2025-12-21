#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria*) override;
		AMateria* createMateria(std::string const & type) override;
};;