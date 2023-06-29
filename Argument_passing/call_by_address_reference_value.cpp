#include <iostream>
using namespace std;

// Call by Value
void modifyByValue(int num) {
    num += 10;
}

// Call by Reference
void modifyByReference(int& num) {
    num += 10;
}

// Call by Address
void modifyByAddress(int* numPtr) {
    *numPtr += 10;
}

int main() {
    int num1=5,num2=5,num3 = 5;

    modifyByValue(num1);
    cout << "After call by value: " << num1 << endl;

    modifyByReference(num2);
    cout << "After call by reference: " << num2 << endl;

    modifyByAddress(&num3);
    cout << "After call by address: " << num3 << endl;

    return 0;
}