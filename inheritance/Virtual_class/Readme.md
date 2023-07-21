### Virtual Class

A virtual function is a member function of a base class that can be overridden by derived classes. It enables dynamic dispatch or late binding, allowing the appropriate derived-class implementation to be invoked at runtime based on the actual type of the object.

Key Points:

1. Declaration: You declare a virtual function in the base class by using the `virtual` keyword before its declaration.
```cpp
class Base {
public:
    virtual void someFunction() {
        // Base class implementation
    }
};
```

2. Overriding: A derived class can override (redefine) a virtual function inherited from its base class by providing its own version of that function with the same signature.
```cpp
class Derived : public Base {
public:
    void someFunction() override {
        // Derived class implementation
    }
};
```
Note: The `override` specifier is optional but recommended as it helps catch errors if you mistakenly don't correctly match the signature or if there's no corresponding base-class virtual function to override.

3. Late Binding and Polymorphism: When you call a virtual function through a pointer or reference to an object, it will dynamically bind to the most-derived version of that function at runtime.
```cpp
Base* ptr = new Derived();  // Create an instance of Derived but store it through a pointer to Base

ptr->someFunction();  // Calls Derived::someFunction()
```
In this example, even though we have created an object of type `Derived`, calling `someFunction()` via a pointer to `Base` will invoke the overridden version defined in `Derived`.

4. Pure Virtual Functions and Abstract Classes:
   - A pure virtual function is declared using syntax similar to declaring regular member functions, but with "= 0" after their declaration.
   - A pure virtual function has no definition within the base class and must be overridden in any derived class that wants to be instantiated.
   - When a class contains at least one pure virtual function, it becomes an abstract class, and objects of such classes cannot be created.

```cpp
class AbstractBase {
public:
    virtual void someFunction() = 0; // Pure virtual function
};
```

---
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Inheritance/)
