#include "game.h" 
int main() {
	load();
	int numberOfShips = 3;
	while (true) {
		cout << "                                                                                                ������ - 1" << endl;
		cout << "                                                                                                  Duo - 2" << endl;
		cout << "                                                                                               ���������� - 3 " << endl;
		cout << "                                                                                          ����� - ����� �������" << endl;
		int k; cin >> k;
		switch (k) {
		case 1: {
			playGame();
			system("pause");
			system("cls");
			break;
		}
		case 2: {
			duo();
			system("pause");
			system("cls");
			break;
		}
		case 3: {
			options();
			
			break;
		}
		default: { cout << "Exit";  return 0; }
		}
	}
