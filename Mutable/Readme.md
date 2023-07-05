#### Mutable 

The `mutable` keyword is used to modify the behavior of a member variable of a class. By default, member variables of a class are non-modifiable (const) within a const member function of that class. However, if you declare a member variable as mutable, it allows the modification of that variable even within const member functions.

example:


```cpp
class MyClass {
public:
    void setValue(int value) const {
        // Error: non-modifiable member variable
        // myValue = value;

        // Correct: modifiable member variable
        mutableValue = value;
    }

    int getValue() const {
        // Error: non-modifiable member variable
        // myValue = 100;

        // Correct: modifiable member variable
        mutableValue = 100;
        return mutableValue;
    }

private:
    int mutable mutableValue;
};
```

`mutableValue` member variable is declared using the mutable keyword. This allows it to be modified even within const member functions like setValue() and getValue(). Without the mutable keyword, attempting to modify the member variable within a const member function would result in a compilation error.