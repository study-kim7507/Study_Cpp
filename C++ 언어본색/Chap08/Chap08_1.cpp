#include <iostream>
using namespace std;

class IntSample 
{
public:
	void ShowScore();
	void setScore(const int s);
	int getScore();
private:
	int Score;
};

void IntSample::setScore(const int s)
{
	Score = s;
}

int IntSample::getScore()
{
	return Score;
}

void IntSample::ShowScore() 
{
	cout << "���� : " << Score << endl;
}

int main()
{
	IntSample Obj;
	Obj.setScore(100);
	cout << "���� : " << Obj.getScore() << endl;

	return 0;
}