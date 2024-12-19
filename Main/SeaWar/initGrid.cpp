#include <vector>
#include "game.h"
using namespace std;

void initGrid(vector<vector<char>>& grid) {
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            grid[i][j] = '~';
        }
    }
}