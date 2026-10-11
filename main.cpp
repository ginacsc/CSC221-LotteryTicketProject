#include <iostream>
#include <random>
using namespace std;

int main() {

    random_device engine;

    uniform_int_distribution<int> number1(1, 9);
    uniform_int_distribution<int> number2(1, 9);
    uniform_int_distribution<int> number3(1, 9);
    uniform_int_distribution<int> number4(1, 9);
    uniform_int_distribution<int> number5(1, 9);
    uniform_int_distribution<int> number6(1, 9);

    cout << number1(engine) << endl;
    cout << number2(engine) << endl;
    cout << number3(engine) << endl;
    cout << number4(engine) << endl;
    cout << number5(engine) << endl;
    cout << number6(engine) << endl;


    return 0;
}