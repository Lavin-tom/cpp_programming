#### Static Member function 

`static` member function is a function that belongs to a class rather than an instance of the class. It can be called using the class name, without requiring an object of the class to be instantiated.

example :
```cpp copy
class MyClass {
public:
    static void myStaticFunction() {
        // Function code goes here
    }
};

int main() {
    // Call the static member function using the class name
    MyClass::myStaticFunction();
    return 0;
}

```

myStaticFunction() is a static member function of the MyClass class. It can be called directly using the class name MyClass::myStaticFunction(), without needing to create an object of the class. Static member functions are often used for utility functions or operations that do not require access to instance-specific data.

---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/)