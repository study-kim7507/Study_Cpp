#pragma once
#ifndef _CHAP11_06_HEADER_H_
#define _CAHP11_06_HEADER_H_

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Person
{
public:
	Person();
	Person(const string name, const string addr, const string tel);
	void SetVar(const string name, const string addr, const string tel);
	string GetName();
	string GetAddr();
	string GetPhoneNum();
private:
	string name, addr, tel;
};

class Student :public Person
{
public:
	Student();
	Student(const string name, const string addr, const string tel, 
		const double kor, const double mus, const double art);
	void SetScore(const double kor, const double mus, const double art);
	void CalTot();
	void CalAver();
	void GetScore(double* kor, double* mus, double* art);
	double GetTot();
	double GetAver();
private:
	double score[3], tot, aver;
	int rank;
};

#else
#endif