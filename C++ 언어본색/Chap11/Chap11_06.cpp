#include "Chap11_06_Header.h"

Person::Person()
{
	name = "";
	addr = "";
	tel = "";
}

Person::Person(const string name, const string addr, const string tel)
{
	this->name = name;
	this->addr = addr;
	this->tel = tel;
}

void Person::SetVar(const string name, const string addr, const string tel)
{
	this->name = name;
	this->addr = addr;
	this->tel = tel;
}

string Person::GetName()
{
	return name;
}

string Person::GetAddr()
{
	return addr;
}

string Person::GetPhoneNum()
{
	return tel;
}

Student::Student()
{
	score[0] = score[1] = score[2] = 0;
	tot = 0;
	aver = 0;
}

Student::Student(const string name, const string addr, const string tel,
	const double kor, const double mus, const double art)
	:Person(name, addr, tel)
{
	score[0] = kor;
	score[1] = mus;
	score[2] = art;
}

void Student::SetScore(const double kor, const double mus, const double art)
{
	score[0] = kor;
	score[1] = mus;
	score[2] = art;
}

void Student::CalTot()
{
	tot = score[0] + score[1] + score[2];
}

void Student::CalAver()
{
	aver = tot / (double)3;
}

void Student::GetScore(double* kor, double* mus, double* art)
{
	*kor = score[0];
	*mus = score[1];
	*art = score[2];
}

double Student::GetTot()
{
	return tot;
}

double Student::GetAver()
{
	return aver;
}