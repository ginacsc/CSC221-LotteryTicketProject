#include <iostream>
#include <random>
using namespace std;

int main() {

    random_device engine;

    int number1;
    int number2;
    int number3;
    int number4;
    int number5;
    int number6;

    uniform_int_distribution<int> number1(1, 9);
    uniform_int_distribution<int> number2(1, 9);
    uniform_int_distribution<int> number3(1, 9);
    uniform_int_distribution<int> number4(1, 9);
    uniform_int_distribution<int> number5(1, 9);
    uniform_int_distribution<int> number6(1, 9);


    return 0;
}