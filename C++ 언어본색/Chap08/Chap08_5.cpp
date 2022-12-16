#include <iostream>
using namespace std;

class CopyObj
{
public:
	CopyObj(const double height, const double weight); // 积己磊
	void ShowVar();
private:
	double height;
	double weight;
};


// 积己磊 沥狼
CopyObj::CopyObj(const double height, const double weight)
{
	this->height = height;
	this->weight = weight;
}

void CopyObj::ShowVar()
{
	cout << "虐 : " << height << endl;
	cout << "个公霸 : " << weight << endl;
}
int main()
{
	CopyObj p1(181.5, 79.3); // 按眉 积己
	p1.ShowVar();

	CopyObj p2(p1); // 按眉 积己, 汗荤 积己磊 龋免
	p2.ShowVar();

	return 0;
}