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
int getTotalAttempts() {
    int sum1 = 0;
    for (int i = 0; i< attemptsHistory.size(); i++){
        sum1+=attemptsHistory[i];
    }
    return sum1;
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
    return attemptsHistory.size()-1;
}

void showStats() {
    std::cout << " STATISTICS " << std::endl;
    std::cout << "Game attempts: " << getGamesCount() << std::endl;

    if (getGamesCount()==0) {
        std::cout << "Haven't played yet :( " << std::endl;
    } else {
        std::cout << "Total attempts: " << getTotalAttempts()<< std::endl;
        std::cout << "Average attempts: " << getAverageAttempts()<< std::endl;
        std::cout << "Last attempt: " << getLastAttempts()<< std::endl;
        std::cout << "History: " << std::endl;
        for (int i=0; attemptsHistory.size() > i; i++) {
            std::cout << "Game" << (i+1) << ": " << attemptsHistory[i];
        }
    }
}