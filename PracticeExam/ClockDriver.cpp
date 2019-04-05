#include "ClockTimer.h"
#include "DigitalClock.h"
#include <iostream>
using namespace std;

int main(void) {

	ClockTimer *timer = new ClockTimer;
	DigitalClock *digitalClock = new DigitalClock(timer);

	int secs;
	cout << "Enter the number of seconds to count: ";
	cin >> secs;

	timer->start(secs);

	int j; cin >> j;
	return 0;
}