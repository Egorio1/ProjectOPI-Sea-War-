#include <vector>
#include <cstdlib>
#include <ctime>
#include "game.h"
using namespace std;

void placeShip(vector<Ship>& ships, int numberOfShips) {
    srand(time(NULL));
    while (ships.size() < numberOfShips) {
        Ship newShip = { rand() % GRID_SIZE, rand() % GRID_SIZE };
        bool valid = true;

        for (const Ship& ship : ships) {
            if (ship.x == newShip.x && ship.y == newShip.y) {
                valid = false;
                break;
            }
        }
        if (valid) {
            ships.push_back(newShip);
        }
    }
}