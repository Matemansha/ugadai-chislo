#include <iostream>
#include <cmath>
#include <vector>
#include <random>
#include "game.h"
using namespace std;

Game::Game() {
    n = 0;
    cout << "Enter the start of the segment." << endl;
    cin >> a;
    cout << "Enter the finish of the segment." << endl;
    cin >> b;
    srand(time(0)); 
    x = a + (rand())%(b-a+1);
};

void Game::play() {
    int gipoteza = a-1;
};
