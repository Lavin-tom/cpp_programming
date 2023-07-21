#### Singleton Class

A singleton class is a design pattern that restricts the instantiation of a class to a single object. It ensures that only one instance of the class exists throughout the program's execution.


```cpp
class Singleton {
private:
 static Singleton* instance; // The single instance of the class

    // Private constructor to prevent direct instantiation
    Singleton() {}

public    // Static method to get the instance of the class
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    // Other member functions of the class
    void someFunction() {
        // ...
    }
};

// Initialize the instance as nullptr
Singleton* Singleton::instance = nullptr;

```

`Singleton class` has a private constructor to prevent direct instantiation from outside the class. Instead, it provides a static method `getInstance()` that returns the single instance of the class. The first time getInstance() is called, it creates a new instance of the class and assigns it the `instance` variable. subsequent calls, it simply returns the existing instance.

To use the singleton class, call getInstance() method like this:

```cpp
Singleton* singleton = Singleton::getInstance();
singleton->someFunction();
```

---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Exception_Handling)