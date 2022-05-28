#pragma once
#include <Windows.h>
#include <iostream>

using namespace std;

extern int UserShards;
extern string UserLogin;

void Shards() {
	int ShardsMenu;
	cout << "Auric Cells:";
	cin >> ShardsMenu;

	Sleep(1500);
	while (true)
	{
		cout << UserShards + ShardsMenu << endl;
		UserShards += ShardsMenu;
		Sleep(50);
		if (UserShards == 1000000) {
			break;
		}
	}
	cout << "Shards:" << ShardsMenu << endl << endl;
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