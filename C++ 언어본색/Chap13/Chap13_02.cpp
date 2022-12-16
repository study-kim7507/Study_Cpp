#include "Chap13_02_Header.h"

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(const unsigned int hour, const unsigned int minute, const unsigned int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

void Time::SetHour(const unsigned int hour)
{
	this->hour = hour;
}

void Time::SetMinute(const unsigned int minute)
{
	this->minute = minute;
}

void Time::SetSecond(const unsigned int second)
{
	this->second = second;
}

unsigned int Time::GetHour()
{
	return hour;
}

unsigned int Time::GetMinute()
{
	return minute;
}

unsigned int Time::GetSecond()
{
	return second;
}

unsigned int Time::CalSecond()
{
	t_sec = hour * 3600 + minute * 60 + second;
	return t_sec;
}

string Time::ShowTime()
{
	char str_h[50], str_m[50], str_s[50];
	_itoa_s(hour, str_h, 50, 10);
	_itoa_s(minute, str_m, 50, 10);
	_itoa_s(second, str_s, 50, 10);

	strcat_s(str_h, 50, "��");
	strcat_s(str_m, 50, "��");
	strcat_s(str_s, 50, "��");

	strcat_s(str_h, 50, str_m);
	strcat_s(str_h, 50, str_s);

	return string(str_h);
}

// ������ �����ε����� ���Ǵ� �Ű����� ��ü timeObj�� CalSecond() ����Լ���
// ��� ������ ���� ��ȯ�ϴ� ����� �ϹǷ� const�� ���̸� �ȵȴ�.
bool Time::operator<=(Time timeObj)
{
	if (this->CalSecond() <= timeObj.CalSecond()) return true;
	else return false;
}

bool Time::operator>=(Time timeObj)
{
	if (this->CalSecond() >= timeObj.CalSecond()) return true;
	else return false;
}