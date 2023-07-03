## Class

A class is a user-defined data type that serves as a blueprint for creating objects. It encapsulates data (member variables) and functions (member functions) together into a single unit.

`example:`

```cpp
class MyClass {
  private:
    int myVariable;

  public:
    // Constructor
    MyClass(int value) {
      myVariable = value;
    }

    // Member function
    void printValue() {
      cout << "My variable: " << myVariable << endl;
    }
};

int main() {
  // Create an object of the class
  MyClass obj(10);

  // Call member function on the object
  obj.printValue();

  return 0;
}
```

In this example, 
- we define a class called `MyClass` with one private member variable (`myVariable`) and one public member function (`printValue`). 
- The constructor initializes the `myVariable` using the input value passed while creating an object. In the `main()` function, we create an object of `MyClass`, passing it a value of `10`.
- Then, we call the `printValue()` member function on that object to display its current value.

- Classes in C++ provide abstraction, encapsulation, inheritance, and polymorphism features that allow for organized code structure and reusability.


---
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/)