#include "Chap11_06_Header.h"

int main()
{
	string name, addr, tel;
	double kor, mus, art;
	ofstream output;
	Student stu1; // Person()과 Student() 생성자가 호출.

	cout << "이름 입력 : ";
	cin >> name;
	cout << "주소 입력 : ";
	cin >> addr;
	cout << "전화번호 입력 : ";
	cin >> tel;

	cout << "국어 점수 입력 : ";
	cin >> kor;
	cout << "음악 점수 입력 : ";
	cin >> mus;
	cout << "미술 점수 입력 : ";
	cin >> art;

	stu1.SetVar(name, addr, tel);
	stu1.SetScore(kor, mus, art);
	stu1.CalTot();
	stu1.CalAver();

	Student stu2("채치수", "암사동", "010-2222-3333", 100, 99, 94);
	// Student(const string name, const string addr, ....) 생성자가 호출됨
	// 따라서 기반클래스의
	// Person(const string name, const string addr, const string tel) 생성자가 호출됨.

	stu2.CalTot();
	stu2.CalAver();

	output.open("data.txt");
	stu1.GetScore(&kor, &mus, &art);
	stu1.CalTot();
	stu1.CalAver();
	output << stu1.GetName() << " " << kor << " " << mus << " "
		<< art << " " << stu1.GetTot() << " " << stu1.GetAver() << endl;

	stu2.GetScore(&kor, &mus, &art);
	stu2.CalTot();
	stu2.CalAver();
	output << stu2.GetName() << " " << kor << " " << mus << " "
		<< art << " " << stu2.GetTot() << " " << stu2.GetAver() << endl;

	output.close();

	return 0;
}