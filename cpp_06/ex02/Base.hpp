#pragma once

#include "iostream"
#include "cstdlib"
#include "ctime"
#include "cstdio"
#include "sys/time.h"

class Base
{
	public:
		Base();
		virtual ~Base();
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);