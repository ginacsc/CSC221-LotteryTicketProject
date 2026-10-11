//This program generates a random six digit lottery ticket number.
#include <iostream>
#include <random>
#include <string>
using namespace std;

int main() {

    random_device engine;

    uniform_int_distribution<int> number1(1, 9);
    uniform_int_distribution<int> number2(1, 9);
    uniform_int_distribution<int> number3(1, 9);
    uniform_int_distribution<int> number4(1, 9);
    uniform_int_distribution<int> number5(1, 9);
    uniform_int_distribution<int> number6(1, 9);

    //storing random numbers as variables
    int num1 = number1(engine);
    int num2 = number2(engine);
    int num3 = number3(engine);
    int num4 = number4(engine);
    int num5 = number5(engine);
    int num6 = number6(engine);

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << num5 << endl;
    cout << num6 << endl;

    string string1 = to_string(num1);
    string string2 = to_string(num2);
    string string3 = to_string(num3);
    string string4 = to_string(num4);
    string string5 = to_string(num5);
    string string6 = to_string(num6);

    cout << string1 << endl;
    cout << string2 << endl;
    cout << string3 << endl;
    cout << string4 << endl;
    cout << string5 << endl;
    cout << string6 << endl;

    string ticketNumber = to_string(num1) + to_string(num2) + to_string(num3) + to_string(num4) +
        to_string(num5) + to_string(num6);

    cout << "The winning lottery ticket number is: " << ticketNumber << endl;

    return 0;
}