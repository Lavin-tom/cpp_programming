### Member Variable Initiliazation

There are multiple ways to initialize member variables in a class.

`Default initialization`: If a member variable is not explicitly initialized, it will be default-initialized. The behavior of default initialization depends on the type of the variable. For built-in types, it will have an indeterminate value, and for class types, the default constructor will be called.
```cpp
class MyClass {
    int myInt;  // default-initialized to indeterminate value
    string myString;  // default-initialized to an empty string
};
```

`Member initialization in the constructor initialization list:` Member variables can be initialized directly in the constructor initialization list using the syntax variableName(value). This allows you to set initial values for member variables when an object is created.
```cpp
class MyClass {
    int myInt;
    string myString;
public:
    MyClass(int i, const string& str)
        : myInt(i), myString(str) {
        // Constructor body
    }
};
```
Member initialization using a default constructor: If a member variable has a default constructor, it will be automatically called during object initialization.
```cpp
class MyClass {
    int myInt;
    string myString;
public:
    MyClass() : myInt(0), myString() {
        // Constructor body
    }
};
```

`Member initialization using brace initialization:` C++11 introduced brace initialization, which allows you to directly initialize member variables using curly braces {}.
```cpp
class MyClass {
    int myInt{0};
    string myString{"Hello"};
};
```

`Member initialization within the constructor body:` Member variables can also be initialized within the constructor body using assignment syntax.

```cpp
class MyClass {
    int myInt;
    std::string myString;
public:
    MyClass(int i, const std::string& str) {
        myInt = i;  // initialization within constructor body
        myString = str;
    }
};
```
These are some common ways to initialize member variables in C++. It's generally recommended to use the constructor initialization list or brace initialization whenever possible, as they provide more efficient and direct initialization.


---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Constructor/copy_constructor)