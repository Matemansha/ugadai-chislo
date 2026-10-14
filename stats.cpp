#include <vector>
#include "stats.h"
#include <iostream>

std::vector<int> attemptsHistory;
void addGameResult(int attempts) {
    attemptsHistory.push_back(attempts);
}

int getGamesCount() {
    return attemptsHistory.size();
}

double getAverageAttempts() {
    if(attemptsHistory.size()==0) {
        return 0;
    }
    double sum = 0;
    for (int i=0; i<attemptsHistory.size(); i++) {
        sum+=attemptsHistory[i];
    }
    return sum/attemptsHistory.size();
}

int getLastAttempts() {
    if (attemptsHistory.size()==0){
        return 0;
    }
    return attemptsHistory[attemptsHistory.size()-1];
}

void showStats() {


    
  
    
}