#include "header1.h"
#include "header2.h"

double calculatorDropChance(double dropRate, int attempts) {
    double chance = 1 - pow(1 - dropRate, attempts);
    return chance;
}
