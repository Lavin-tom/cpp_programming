#### Constant Member function

A constant member function is a member function that promises not to modify the data members of the class. It is marked with the 'const' keyword at the end of the function declaration.

Here's an example:

```cpp
Copy code
class MyClass {
    int num;
public:
    MyClass() : num(0) {}

    int getNum() const {
        // This is a constant member function
        // It cannot modify the data members of the class
        return num;
    }
};

int main() {
    const MyClass obj;
    int value = obj.getNum(); // Calling a constant member function on a const object is allowed

    // obj.num = 5; // This would be an error, as obj is const and num cannot be modified inside a constant member function

    return 0;
}

```

`getNum()` function is declared as int getNum() const. This indicates that the function is a constant member function and will not modify any data members of the class. Hence, it can be called on const objects of the class.

Using constant member functions helps in maintaining the integrity of the data members and allows calling these functions on const objects.

---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Mutable)