### Destructor


A destructor is a special method that is called automatically when an object goes out of scope. Destructors are used to free any resources that the object is using, such as memory or other resources.

example :

```c++
class Example {
public:
    Example() {
        // Some constructor code here
    }
    ~Example() {
        // Free any resources used by the object here
    }
};
```

When the Example object goes out of scope, its destructor will be called automatically, which in this case would free any resources used by the object.

Destructors are a powerful feature of C++ that can help you to ensure that our objects are properly cleaned up after they are no longer needed.


---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Constant_member_function)
