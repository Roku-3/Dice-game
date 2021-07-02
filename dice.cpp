#include <iostream>
#include <random>
using namespace std;

int main() {
    int dice1 = rand()%6 + 1;
    int dice2 = rand()%6 + 1;
    cout << "Rolling the dice..." << endl;
    cout << "Die 1: " << dice1 << endl;
    cout << "Die 2: " << dice2 << endl;

    cout << "Total value: " << dice1 + dice2 << endl;
}
