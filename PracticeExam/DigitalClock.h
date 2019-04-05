#pragma once
#include "Observer.h"
#include "ClockTimer.h"

class DigitalClock : public Observer
{
private:
	ClockTimer* _subject;
public:
	DigitalClock();
	DigitalClock(ClockTimer* s);
	~DigitalClock();
	void Update();
	void display();
};

