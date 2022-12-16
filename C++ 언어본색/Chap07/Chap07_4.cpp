#include <iostream>
using namespace std;

typedef struct {
	char name[20];
	char mphone[20];
	char group[20];
} AddressBook;

typedef struct _AddressList {
	char name[20];
	char mphone[20];
	struct _AddressList* next;
} AddressList;

int main()
{
	AddressBook p1 = { "김동현", "010-2222-8888", "가족" };

	cout << "이름 : " << p1.name << endl;
	cout << "전화번호 : " << p1.mphone << endl;
	cout << "그 룹 : " << p1.group << endl;

	AddressList *item, *head, *current;

	item = new AddressList();
	strcpy_s(item->name, 20, "Park");
	strcpy_s(item->mphone, 20, "010-1111-2222");
	item->next = NULL;

	head = current = item;

	item = new AddressList();
	strcpy_s(item->name, 20, "Kim");
	strcpy_s(item->mphone, 20, "010-3333-2222");
	item->next = NULL;

	current->next = item;
	current = item;

	item = new AddressList();
	strcpy_s(item->name, 20, "Jung");
	strcpy_s(item->mphone, 20, "010-4444-2222");
	item->next = NULL;

	current->next = item;

	current = head;
	while (current != NULL)
	{
		cout << "이름 : " << current->name << endl;
		cout << "전화번호 : " << current->mphone << endl;
		current = current->next;
	}

	return 0;
}