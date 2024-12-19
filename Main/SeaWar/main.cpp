#include "game.h" 
int main() {
	load();
	int numberOfShips = 3;
	while (true) {
		cout << "                                                                                                Играть - 1" << endl;
		cout << "                                                                                                  Duo - 2" << endl;
		cout << "                                                                                               Информация - 3 " << endl;
		cout << "                                                                                          Выход - любая клавиша" << endl;
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
