### Function Overloading

Function overloading is a feature in C++ that allows `multiple functions with the same name, but different parameter lists`, to be defined. This means that you can have multiple functions in a program with the same name, as long as they have different types or number of parameters.

example:

```C++
#include <iostream>
using namespace std;
void print(int num) {
    cout << "Printing an integer: " << num << endl;
}
 
void print(double num) {
    cout << "Printing a double: " << num << endl;
}
 
void print(char c) {
    cout << "Printing a character: " << c << endl;
}
 
int main() {
    print(5);          // Calls the function print(int)
    print(3.14);       // Calls the function print(double)
    print('a');        // Calls the function print(char)
    
    return 0;
}


```
---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Inline_functions)