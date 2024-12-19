#include "game.h"
using namespace std;

void printpole(const vector<vector<char>>& grid) {
    for (const auto& row : grid) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}