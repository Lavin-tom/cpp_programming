### Friend function

A `friend` function is a function that is not a member of a class, but has access to the private and protected members of the class. It can be declared as a friend within the class definition by using the `friend` keyword.

Here's an example:

```cpp
class MyClass {
private:
    int x;
public:
    MyClass(int num) : x(num) {}

    // Declaring display() as a friend function
    friend void display(MyClass obj);
};

// Definition of display() outside the class
void display(MyClass obj) {
   cout << "The value of x is: " << obj.x << endl;
}

int main() {
   MyClass myObj(5);
   display(myObj);  // Calling the friend function

   return 0;
}
```

In this example, `display()` is declared as a friend function inside the `MyClass` definition. As such, it can directly access and print out the private member `x` without needing any getter or setter functions.

Friend functions are commonly used when we want certain non-member functions to have direct access to internal data members or functionality of a class.


---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Constructor)
