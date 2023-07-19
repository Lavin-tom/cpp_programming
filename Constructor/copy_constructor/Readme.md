#### Copy Constructor: 

A copy constructor creates a new object as an exact copy of an existing object, passed as a reference parameter. It is used when objects need to be initialized or copied from existing objects.

When working with objects and performing copy operations, it's important to understand the concepts of shallow copy and deep copy.

1. `Shallow Copy`: A shallow copy involves copying the values of all data members from one object to another. If a class contains pointers or dynamically allocated memory, a shallow copy would simply copy the pointer value, resulting in two objects pointing to the same memory location. As a result, changes made in one object will affect both objects since they share the same underlying data.

2. `Deep Copy`: In contrast, a deep copy involves creating separate copies of dynamically allocated memory or referenced resources instead of just copying their addresses/pointers. This ensures that each object has its own independent set of resources so that changes made in one object do not affect others.

example:

```cpp
#include <iostream>
#include <cstring>

class String {
private:
    char* str;

public:
    // Parameterized constructor
    String(const char* s) {
        int length = std::strlen(s);
        str = new char[length + 1];
        std::strcpy(str, s);
    }

    // Copy constructor (Deep Copy)
    String(const String& other) {
        int length = std::strlen(other.str);
        str = new char[length + 1];
        std::strcpy(str, other.str);
    }

   // Destructor
   ~String() {
       delete[] str;
   }
   
   void print() const {
       std::cout << "String: " << str << std::endl;
   }
};

int main() {
   String original("Hello");
   
   String shallowCopy(original);     // Shallow Copy
   
   original.print();                  // Output: Hello
   shallowCopy.print();               // Output: Hello

   
  
}
```

`String` class has a dynamically allocated character array `str`. The copy constructor is used to create a shallow copy of the original object. As a result, both objects (`original` and `shallowCopy`) point to the same memory location for their data members.

If changes are made to `str` in one object (e.g., modifying it or deallocating its memory), it will affect both objects since they share the same resources. This can lead to unexpected behavior and bugs.

To achieve deep copy semantics, we need to implement a custom copy constructor

---
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Member_variable_initialization)