#include <iostream>
#include <windows.h>
#include "AuricCells+.h"

using namespace std;

string UserId = "0004";
string UserLogin = "Son";
string UserPassword = "12345";
int UserAuricCells = 0;
int UserShards = 0;
string UserName = "Unknown";

int main() {
	cout << "SourceX version 0.1.2" << endl << endl;

	string Login;
	cout << "Login:";
	cin >> Login;

	string Password;
	cout << "Password:";
	cin >> Password;

	if (UserLogin == Login && UserPassword == Password) {
		system("CLS");
		Sleep(2200);
		cout << "Checking...";
		Sleep(1500);
		system("CLS");
		cout << "True!";
		Sleep(1500);
		system("CLS");
	}
	else {
		system("CLS");
		Sleep(2200);
		cout << "Checking...";
		Sleep(1500);
		system("CLS");
		cout << "Failed!";
		Sleep(1500);
		system("CLS");
		cout << "FAILED!" << endl << endl;
		cout << "Error Invalid Login And Password!" << endl;
		cout << "Try Again!" << endl << endl;
		system("pause");
		exit(3);
		return 0;
		system("CLS");
	}

	cout << "SourceX version 0.1.2" << endl << endl;
	cout << "ID:" << UserId << "||" << "User:" << UserLogin << endl;
	int menu;
	cout << "||MENU||" << endl;
	cout << "[1]-Account Info" << endl;
	cout << "[2]-SaveInjector" << endl;
	cout << "[3]-Auric Cells+" << endl;
	cout << "[4]-Shards+" << endl;
	cout << "[5]-Discord-Server" << endl;
	cout << "[6]-Exit" << endl << endl;

	cin >> menu;

	switch (menu) {
	case 1:
		Sleep(2500);
		system("CLS");
		cout << "SourceX version 0.1.2" << endl << endl;
		cout << "Name:" << UserName << "||" << "Auric Cells:" << UserAuricCells << "||" << "Shards:" << UserShards << endl << endl;
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
		return 0;
		exit(3);
		break;

	case 2:
		Sleep(2500);
		system("CLS");
		cout << "SourceX version 0.1.2" << endl << endl;
		int SaveMenu;
		cout << "Save Injector" << endl;
		cout << "[1]-Save Down" << endl;
		cout << "[2]-Exit" << endl << endl;

		cin >> SaveMenu;

		switch (SaveMenu) {
		case 1:
			system("CLS");
			Sleep(1800);
			cout << "Download Save...";
			Sleep(3200);
			system("CLS");
			Sleep(1800);
			cout << "True!" << endl << endl;
			system("pause");
			system("CLS");
			cout << "GoodBye! " << UserLogin;
			Sleep(2000);
			system("CLS");
			Sleep(2000);
			cout << "Legion INC 2022 Creator by CO0K1E";
			Sleep(2000);
			system("CLS");
			return 0;
			exit(3);
			break;

		case 2:
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
			return 0;
			exit(3);
			break;
		}
		break;

	case 3:
		Sleep(2000);
		system("CLS");
		cout << "SourceX version 0.1.2" << endl << endl;
		AuricCells();

		break;

	case 4:
		Sleep(2000);
		system("CLS");
		cout << "Soon!";
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
		return 0;
		exit(3);
		break;

	case 5:
		Sleep(2000);
		system("CLS");
		system("start https://discord.gg/TkVbeyWs");
		system("CLS");
		main();
		break;

	case 6:
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
		return 0;
		exit(3);
		break;
	}

}