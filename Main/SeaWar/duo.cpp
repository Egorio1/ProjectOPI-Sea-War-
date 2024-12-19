#include "game.h"
void duo() {
    vector<vector<char>> grid(GRID_SIZE, vector<char>(GRID_SIZE));
    vector<Ship> ships;
    initGrid(grid);
    placeShip(ships, numberOfShips);
    int firstplayerattempts = 0;
    int secondplayerattempts = 0;
 
    int firstplayerhits = 0;
    int secondplayerhits = 0;
    int hits = 0;
    while (hits < numberOfShips) {
        cout << "Первый игрок " << endl;
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
        
        firstplayerattempts++;
        bool hit = false;

        for (const Ship& ship : ships) {
            if (ship.x == x - 1 && ship.y == y - 1) {
                cout << "Попадание!\n";
                grid[x - 1][y - 1] = 'X';
                firstplayerhits++;
                hit = true;
                break;
            }
        }

        if (!hit) {
            cout << "Мимо.\n";
            grid[x - 1][y - 1] = 'O';
        }
        printpole(grid);
        cout << "Второй игрок " << endl;
        
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

        secondplayerattempts++;
         hit = false;

        for (const Ship& ship : ships) {
            if (ship.x == x - 1 && ship.y == y - 1) {
                cout << "Попадание!\n";
                grid[x - 1][y - 1] = 'X';
                secondplayerhits++;
                hit = true;
                break;
            }
        }

        if (!hit) {
            cout << "Мимо.\n";
            grid[x - 1][y - 1] = 'O';
        }
        hits = secondplayerhits + firstplayerhits;

        printpole(grid);
    }
    if (secondplayerhits > firstplayerhits) {
        cout << "Победил второй игрок за " << secondplayerattempts << " попыток и с " << secondplayerhits << " уничтоженными целями" << endl;
    }
    else if (secondplayerhits < firstplayerhits) {
        cout << "Победил второй игрок за " << firstplayerattempts << " попыток и с " << firstplayerhits << " уничтоженными целями" << endl;
    }
    else if (secondplayerhits = firstplayerhits) {
        cout << "Ничья" << endl;
    }
}