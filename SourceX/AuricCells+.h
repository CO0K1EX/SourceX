#pragma once
#include <Windows.h>
#include <iostream>

using namespace std;

void AuricCells() {
	int AuricMenu;
	cout << "Auric Cells:";
	cin >> AuricMenu;

	Sleep(1500);
	for (UserAuricCells = 1; UserAuricCells <= 10000; UserAuricCells++)
	{
		AuricMenu = AuricMenu + UserAuricCells;
	}
	cout << "Auric Cells:" << AuricMenu << endl << endl;
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