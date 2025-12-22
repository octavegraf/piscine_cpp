#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << me->getName() << ": " << me << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	AMateria* clone = tmp->clone();
	std::cout << "tmp: " << tmp->getType() << ", " << tmp << std::endl;
	std::cout << "clone: " << clone->getType() << ", " << clone << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(3);
	me->unequip(5);
	ICharacter* bob = new Character("bob");
	Character *test = new Character("test");
	Character *copy = new Character(*test);
	std::cout << "test name: " << test->getName() << ", address: " << test << std::endl;
	std::cout << "copy name: " << copy->getName() << ", address: " << copy << std::endl;
	delete test;
	delete copy;
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	delete clone;
return 0;
}