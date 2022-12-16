#pragma once
#ifndef _CHAP13_02_HEADER_H_
#define _CHAP13_02_HEADER_H_

#include <iostream>
using namespace std;

class Time
{
public:
	Time();
	Time(const unsigned int hour, const unsigned int minute, const unsigned int second);
	unsigned int CalSecond();
	void SetHour(const unsigned int hour);
	void SetMinute(const unsigned int minute);
	void SetSecond(const unsigned int second);
	unsigned int GetHour();
	unsigned int GetMinute();
	unsigned int GetSecond();
	string ShowTime();

	bool operator <=(Time timeObj);
	bool operator >=(Time timeObj);

private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
	unsigned int t_sec;
};

#else
#endif
