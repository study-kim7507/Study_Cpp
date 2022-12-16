#include <iostream>
using namespace std;

typedef struct {
	char Name[30];
	char MPhoneNum[20];
} SAM;

// sizeof(SAM) : 30 + 20 = 50 Bytes

typedef struct {
	SAM arr[5];
	int i;
} SAMARRAY;

// sizeof(SAMARRAY) : 250 + 2 (padding) + 4 = 256 Bytes
int main()
{
	cout << sizeof(SAMARRAY) << endl;

	return 0;
}