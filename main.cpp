#include <iostream>
#include "header1.h"
#include "header2.h"

using namespace std;

int main() {
    double dropRate;
    int attempts;

    cout << "Enter the drop rate (as a decimal): ";
    cin >> dropRate;

    cout << "Enter the number of attempts: ";
    cin >> attempts;

    double chance = calculatorDropChance(dropRate, attempts);
    cout << "The chance of getting the drop in " << attempts << " attempts is: " << chance * 100 << "%" << endl;

    return 0;
}
