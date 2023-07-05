### Dynamic Constructor

When creating objects dynamically, we use the `new` operator to allocate memory for an object on the heap. This allows us to create objects at runtime and control their lifetime manually.

example :

```cpp
#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

int main() {
   // Dynamic object creation
   MyClass* obj = new MyClass();

   // Calling member function through pointer
   obj->display();

   // Deleting dynamically allocated object
   delete obj;

  return 0;
}
```

we use `new MyClass()` to dynamically allocate memory for an instance of the class `MyClass`. The resulting pointer (`obj`) holds the address of the newly created object. We can then access members and call member functions using the arrow operator (->).

After we finish working with the dynamically allocated object, it's important to deallocate its memory using `delete` operator to prevent memory leaks.

While this approach gives flexibility in managing objects' lifetimes explicitly, it also requires manual cleanup of dynamically allocated resources. Therefore, it is advised to use smart pointers or RAII (Resource Acquisition Is Initialization) techniques like `std::unique_ptr` or `std::shared_ptr`, which automatically handle resource deallocation based on their scope/lifetime.

---

[Back](https://github.com/Lavin-tom/cpp_programming/tree/master/Destructor)
