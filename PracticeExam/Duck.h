#pragma once
#include <string>
#include "Animal.h"

class Duck : virtual public Animal
{
public:
	Duck();
	~Duck();
	virtual std::string talk();
};

