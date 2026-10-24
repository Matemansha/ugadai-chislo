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
    cout << "Enter the estimated number." << endl;
    while (true) {
    cin >> gipoteza;
    if (gipoteza<a or gipoteza>b) {
        cout << "Incorrect number" << endl;
    }
    else {
        if (gipoteza==x) {
            n+n+1;
            cout << "You won!" << endl;
            break;}
        if (gipoteza>x) {
            cout << "Your number is greater than the guessed one." << endl;
            n=n+1;}
        if (gipoteza<x) {
            cout << "Your number is less than the guessed one." << endl;
            n=n+1;}
    }
    }
};
