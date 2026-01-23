#pragma once
#include <iostream>
#include <stdint.h>

struct Data
{
	int i;
};

class Serialization
{
	private:
	public:
		Serialization();
		virtual ~Serialization();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};