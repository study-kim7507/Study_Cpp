#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

#define MAX 50

typedef struct {
	string name;
	int score[3];
	int sum;
	double aver;

}OneStudent;

int main()
{
	int i = 0;
	int sum = 0;
	char fn[50] = "sung.txt";
	OneStudent OneLine[MAX];

	fstream fp;
	fp.open(fn, ios::in);

	while (!fp.eof())
	{
		fp >> OneLine[i].name;
		for (int j = 0; j < 3; j++)
		{
			fp >> OneLine[i].score[j];
			sum += OneLine[i].score[j];
		}
		OneLine[i].sum = sum;
		OneLine[i].aver = sum / (double)3;
		sum = 0;
		i++;
	}
	

	for (i = 0; i < 8; i++)
	{
		cout << OneLine[i].name << " " << setw(3) << OneLine[i].score[0];
		cout << setw(3) << " " << OneLine[i].score[1] << " ";
		cout << setw(3) << OneLine[i].score[2] << " ";
		cout << OneLine[i].sum << " " << OneLine[i].aver << endl;
	}

	fp.close();
	return 0;
}