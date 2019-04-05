#pragma once
#include "Observer.h"
#include <list>

class Subject
{
private:
	std::list<Observer*> *_observers;
public:
	Subject();
	~Subject();
	virtual void Attach(Observer* o);
	virtual void Detach(Observer* o);
	virtual void Notify();
};

