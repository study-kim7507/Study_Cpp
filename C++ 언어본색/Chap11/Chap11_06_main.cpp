#include "Chap11_06_Header.h"

int main()
{
	string name, addr, tel;
	double kor, mus, art;
	ofstream output;
	Student stu1; // Person()�� Student() �����ڰ� ȣ��.

	cout << "�̸� �Է� : ";
	cin >> name;
	cout << "�ּ� �Է� : ";
	cin >> addr;
	cout << "��ȭ��ȣ �Է� : ";
	cin >> tel;

	cout << "���� ���� �Է� : ";
	cin >> kor;
	cout << "���� ���� �Է� : ";
	cin >> mus;
	cout << "�̼� ���� �Է� : ";
	cin >> art;

	stu1.SetVar(name, addr, tel);
	stu1.SetScore(kor, mus, art);
	stu1.CalTot();
	stu1.CalAver();

	Student stu2("äġ��", "�ϻ絿", "010-2222-3333", 100, 99, 94);
	// Student(const string name, const string addr, ....) �����ڰ� ȣ���
	// ���� ���Ŭ������
	// Person(const string name, const string addr, const string tel) �����ڰ� ȣ���.

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