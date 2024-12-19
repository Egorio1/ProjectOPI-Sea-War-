#include <iostream>
#include <vector>
#include "game.h"
using namespace std;
void playGame() {
    
    vector<vector<char>> grid(GRID_SIZE, vector<char>(GRID_SIZE));
    vector<Ship> ships;
    initGrid(grid);                    
    placeShip(ships, numberOfShips);   
    int attempts = 0;
    int hits = 0;

    while (hits < numberOfShips) {
        int x, y;
        cout << "Введите координату x: ";

        cin >> y;
 
            if (y < 1 || y > GRID_SIZE) {
                cout << "Неверные координаты, попробуйте снова.\n";
                continue;
            }
        cout << "Введите координату y: ";
        cin >> x;
        if (x < 1 || x > GRID_SIZE) {
            cout << "Неверные координаты, попробуйте снова.\n";
            continue;
        }
    

        attempts++;
        bool hit = false;

        for (const Ship& ship : ships) {
            if (ship.x == x-1 && ship.y == y-1) {
                cout << "Попадание!\n";
                grid[x-1][y-1] = 'X';
                hits++;
                hit = true;
                break;
            }
        }

        if (!hit) {
            cout << "Мимо.\n";
            grid[x-1][y-1] = 'O';
        }

        printpole(grid);
    }

    cout << "Поздравляю! Вы потопили все корабли за " << attempts << " попыток.\n";
}
