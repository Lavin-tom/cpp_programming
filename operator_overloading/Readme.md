#### Operator Overloading

Operator overloading is to redefine the behavior of operators for user-defined types. It enables you to use operators such as +, -, *, /, etc., with objects of your own classes.

Here's an example that demonstrates operator overloading for a simple class called Vector:

```cpp
#include <iostream>
using namespace std;
class Vector {
private:
    int x, y;

public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the + operator
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    // Overloading the - operator
    Vector operator-(const Vector& other) const {
        return Vector(x - other.x, y - other.y);
     }

    // Overloading the * operator (scalar multiplication)
    Vector operator*(int scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    // Overloading the == operator
    bool operator==(const Vector& other) const {
        return (x == other.x && y == other.y);
    }

    // Overloading the != operator
    bool operator!=(const Vector& other) const {
        return !(*this == other);
    }

    // Overloading the << operator (for output stream    friend std::ostream& operator<<(std::ostream& os, const Vector& vec) {
        os << "(" << vec.x << ", " << vec.y << ")";
        return os;
    }
};

int main() {
    Vector v1(2, 3);
    Vector v2(4, 5);

    Vector sum = v1 + v2;
    Vector diff = v1 - v2;
    Vector scaled = v1 * 3;

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Scaled: " << scaled << endl;

    if (v1 == v2) {
        cout << "v1 and v2 are equal." << endl;
    } else {
        cout << "v1 and v2 are not equal." << endl;
    }

    return 0;
}
```

In this example, the Vector class overloads several operators:

The + operator is overloaded to perform vector addition.
The - operator is overloaded to perform vector subtraction.
The * operator is overloaded for scalar multiplication.
The == operator is overloaded to compare two vectors for equality.
The != operator is overloaded to compare two vectors for inequality.
Additionally, the << operator is overloaded as a friend function to allow easy output of Vector objects using the std::cout stream.

The main() function demonstrates the usage of these overloaded operators with Vector objects.

I hope this helps you understand operator overloading in C++. Let me know if you have any further questions!
---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/)