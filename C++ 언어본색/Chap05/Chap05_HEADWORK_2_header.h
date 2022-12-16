#pragma once
typedef struct {
	int Month;
	int Day;
	char Name[20];
	int Count;
	int UnitPrice;
	int Price;
} ITEM;

// size : 4 + 4 + 20 + 4 + 4 + 4 = 40

typedef struct {
	ITEM Item[10];
	int ReceiptNum;
	char Name[20];
	char BusinessRegNum[50];
	char FirmName[20];
	char Name1[20];
	char FirmAddress[30];
	char TypeOfFirm[30];
	char LinesOfBusiness[50];
	char Date[20];
	int Amount;
	char Handler[50];
} RECEIPT;

// size : 400 + 4 + 20 + 50 + 20 + 20 + 30 + 30 + 50 + 20 + 4 + 50 = 718