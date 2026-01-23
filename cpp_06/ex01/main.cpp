#include "Serialization.hpp"

int main(void)
{
	struct Data data;
	data.i = 42;
	uintptr_t raw = 0;
	Serialization converter;
	std::cout << "Data address: " << &data << std::endl;
	std::cout << "Data->i value: " << data.i << std::endl;
	std::cout << "uintptr_t address: " << raw << std::endl;
	raw = converter.serialize(&data);
	std::cout << "Serialized Data address: " << raw << std::endl;
	data = *converter.deserialize(raw);
	std::cout << "Deserialized Data address: " << converter.deserialize(raw) << std::endl;
	std::cout << "Data->i value: " << data.i << std::endl;
}
