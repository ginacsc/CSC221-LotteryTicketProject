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

    cout << number1(engine) << endl;
    cout << number2(engine) << endl;
    cout << number3(engine) << endl;
    cout << number4(engine) << endl;
    cout << number5(engine) << endl;
    cout << number6(engine) << endl;

    string string1 = to_string(number1(engine));
    string string2 = to_string(number2(engine));
    string string3 = to_string(number3(engine));
    string string4 = to_string(number4(engine));
    string string5 = to_string(number5(engine));
    string string6 = to_string(number6(engine));

    cout << string1 << endl;
    cout << string2 << endl;
    cout << string3 << endl;
    cout << string4 << endl;
    cout << string5 << endl;
    cout << string6 << endl;


    return 0;
}