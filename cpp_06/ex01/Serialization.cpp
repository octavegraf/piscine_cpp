#include "Serialization.hpp"

Serialization::Serialization()
{
	#ifdef DEBUG
	std::cout << "Serialization constructor called." << std::endl;
	#endif
}

Serialization::~Serialization()
{
	#ifdef DEBUG
	std::cout << "Serialization destructor called." << std::endl;
	#endif
}

uintptr_t Serialization::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialization::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
