#include <iostream>
#include <random>
using namespace std;

int main() {
    int dice1 = rand()%6 + 1;
    int dice2 = rand()%6 + 1;
    cout << "Rolling the dice..." << endl;
    cout << "Die 1: " << dice1 << endl;
    cout << "Die 2: " << dice2 << endl;

    int total = dice1+dice2;
    cout << "Total value: " << total << endl;
    if (total > 7){
        cout << "You won!" << endl;
    }else{
        cout << "You lose" << endl;
    }
}
