### MOI-Mode Of Inheritance

There are three modes of inheritance: `public`, `private`, and `protected`. These modes determine the accessibility of base class members (i.e., variables and functions) in the derived class.

1. Public Inheritance:
   - When a class is publicly inherited from a base class, all public members of the base class become public members of the derived class.
   - Protected members of the base class become protected members in the derived class, meaning they can only be accessed by member functions or friends of both classes.
   - Private members of the base class are not accessible directly in the derived class.

2. Private Inheritance:
   - With private inheritance, all public and protected members from the base class become private in the derived class.
   - This means that they can only be accessed by member functions or friends within both classes but are not accessible outside.

3. Protected Inheritance:
   - Similar to private inheritance, with protected inheritance, all public and protected members from the base class become protected in
     The derived-class scope.
    - This indicates that they cannot be accessed directly outside both classes but can be used by member functions or friends inside them.

The mode of inheritance is specified while declaring a new derived-class using one of these keywords before BaseClass:

```cpp
class DerivedClass : <mode> BaseClass {
    // ...
};
```

It's important to note that when inheriting privately or protectively from a baseclass,private access specifier should inherit it as `private`  such as `class Derived : private Base`, respectively.

---
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/)