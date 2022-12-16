#include <iostream>
using namespace std;

class CopyObj
{
public:
	CopyObj(const double height, const double weight); // ������
	void ShowVar();
private:
	double height;
	double weight;
};


// ������ ����
CopyObj::CopyObj(const double height, const double weight)
{
	this->height = height;
	this->weight = weight;
}

void CopyObj::ShowVar()
{
	cout << "Ű : " << height << endl;
	cout << "������ : " << weight << endl;
}
int main()
{
	CopyObj p1(181.5, 79.3); // ��ü ����
	p1.ShowVar();

	CopyObj p2(p1); // ��ü ����, ���� ������ ȣ��
	p2.ShowVar();

	return 0;
}