#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AvoidLeaks.hpp"

int main()
{
	AvoidLeaks *leakManager = new AvoidLeaks();
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	leakManager->store(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	leakManager->store(tmp);
	AMateria* clone = tmp->clone();
	leakManager->store(clone);
	std::cout << "tmp: " << tmp->getType() << ", " << tmp << std::endl;
	std::cout << "clone: " << clone->getType() << ", " << clone << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("ice");
	leakManager->store(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	leakManager->store(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	leakManager->store(tmp);
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
	delete leakManager;
return 0;
}