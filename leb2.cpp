/*
1. WAP to overload < operator to find which object
contains higher value from given 2 numbers.
*/

#include <iostream>
using namespace std;

class Number {
public:
    int value;
public:
    Number(int num) {
        value = num;
    }

     operator<(int Number&other) int {
        return value < other.value;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    if (num1 < num2) {
        cout <<"2 is bigesst"<< endl;
    } else {
        cout << "1 is bigesst" << endl;
    }

    return 0;
}

