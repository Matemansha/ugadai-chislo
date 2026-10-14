#ifndef STATS_H
#define STATS_H
#include <vector>

void addGameResult(int attempts);
int getTotalAttempts()
int getGamesCount();
int getAverageAttempts();
int getLastAttempts();

void showStats();
#endif