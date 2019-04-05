#pragma once
#include <string>
#include "Duck.h"
#include "Beaver.h"

class Platypus : virtual public Duck, virtual public Beaver
{
public:
	Platypus();
	~Platypus();
	virtual std::string talk();
};

