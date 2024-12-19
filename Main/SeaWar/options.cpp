#include "game.h"
void options() {
	setlocale(LC_ALL, "RU");
	cout << "Разметка игрового поля." << endl;
	cout << endl;
	for (int i = 1; i <= GRID_SIZE; i++) {
		cout << " " << i;
	}
	cout << endl;
	for (int i = 1; i <= GRID_SIZE; i++) {
		cout << i;
		for (int j = 1; j <= GRID_SIZE; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	cout << "Игровое поле " << GRID_SIZE << "x" << GRID_SIZE << endl;
	cout << "Количество кораблей на игровом поле " << numberOfShips  << endl;
	system("pause");
	system("cls");
}