#pragma once
#include <Windows.h>
#include <iostream>

using namespace std;

extern int UserAuricCells;
extern string UserLogin;

void AuricCells() {
	int AuricMenu;
	cout << "Auric Cells:";
	cin >> AuricMenu;

	Sleep(1500);
	while (true)
	{
		cout << UserAuricCells + AuricMenu << endl;
		UserAuricCells += AuricMenu;
		Sleep(50);
		if (UserAuricCells == 1000000) {
			break;
		}
	}
	cout << "Auric Cells:" << UserAuricCells << endl << endl;
	system("pause");
	Sleep(2000);
	system("CLS");
	Sleep(2000);
	cout << "GoodBye! " << UserLogin;
	Sleep(2000);
	system("CLS");
	Sleep(2000);
	cout << "Legion INC 2022 Creator by CO0K1E";
	Sleep(2000);
	system("CLS");
	return;
	exit(3);
}