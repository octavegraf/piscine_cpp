#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src.learned[i])
			learned[i] = src.learned[i]->clone();
		else
			learned[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (learned[i])
				delete learned[i];
			if (src.learned[i])
				learned[i] = src.learned[i]->clone();
			else
				learned[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (learned[i])
			delete learned[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
	
	for (int i = 0; i < 4; i++)
	{
		if (!learned[i])
		{
			learned[i] = m;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (learned[i] && learned[i]->getType() == type)
			return (learned[i]->clone());
	}
	return (NULL);
}