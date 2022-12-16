#ifndef _CHAP12_05_HEADER_H_
#define _CHAP12_05_HEADER_H_

#define MAX 50
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class ScoreSource
{
public:
	void SetName(string name[], const int num);
	void SetScore(const int score[], const int num);
protected:
	string name[MAX];
	int score[MAX];
	int num;
};

class RankGrade
{
public:
	int SetGrade(const int score[], const int num);
	int SetRank(const int score[], const int num);
protected:
	int num;
	char grade[MAX];
	int rank[MAX];
};

class SungJuk : public ScoreSource, public RankGrade // 다중 상속
{
public:
	int GetScore(const int index);
	string GetName(const int index);
	int OrderOnScore();
	int DisplayGraph(const int index);
	int GetRank(const int index);
	int GetOrderScore(const int index);
	int GetOrderRank(const int index);
	string GetOrderName(const int index);
private:
	int OrderRank[MAX];
	int OrderScore[MAX];
	string OrderName[MAX];
};

#else
#endif

