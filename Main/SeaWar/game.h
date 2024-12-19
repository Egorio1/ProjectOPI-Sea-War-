#pragma once
#include <vector>
#include <iostream>
using namespace std;

struct Ship {
    int x, y;
};
const int numberOfShips = 5;
const int GRID_SIZE = 5; 
void options();
void initGrid(vector<vector<char>>& grid);
void placeShip(vector<Ship>& ships, int numberOfShips);
void printpole(const vector<vector<char>>& grid);
void load();
void playGame();
void duo();