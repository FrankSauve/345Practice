#pragma once
#include <string>
#include "Animal.h"

class Beaver : virtual public Animal
{
public:
	Beaver();
	~Beaver();
	virtual std::string talk();
};

