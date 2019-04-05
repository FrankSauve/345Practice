#pragma once
#include "Subject.h"
class ClockTimer : public Subject
{
private:
	int hour;
	int minute;
	int second;
public:
	ClockTimer();
	~ClockTimer();
	int getHour() { return hour; }
	int getMinute() { return minute; }
	int getSecond() { return second; }
	void start(int time);
	void tick();
};

