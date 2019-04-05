#pragma once
#include <string>
#include "Animal.h"

class Cat : virtual public Animal
{
public:
	Cat();
	~Cat();
	virtual std::string talk();
};

