### Constructor Overloading
It is the ability to define multiple constructors within a class, each having a different set of parameters. This allows objects of the class to be initialized in various ways depending on the arguments passed.

When multiple constructors are defined with different parameter lists, they can be distinguished based on the number, types, or order of their parameters. The compiler will determine which constructor to call based on the arguments provided during object creation.

example :

```cpp
class Rectangle {
private:
    int width;
    int height;

public:
    // Default constructor
    Rectangle() {
        width = 0;
        height = 0;
    }

    // Constructor with two integer parameters
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

   // Constructor with one integer parameter (square)
   Rectangle(int sideLength) {
       width = sideLength;
       height = sideLength;
   }
};

int main() {
   Rectangle rect1;                // Using default constructor

   Rectangle rect2(4, 5);          // Using parameterized constructor

   Rectangle square(3);            // Using overloaded constructor for squares
   
   return 0; 
}
```

 `Rectangle` has three constructors: a default constructor with no parameters, a parameterized constructor that takes two integers for arbitrary rectangles' dimensions `(width and height)`, and an overloaded version that takes only one integer argument for creating square shapes.

Based on how we create objects (`rect1`, `rect2`, and `square`) using these constructors inside the `main()` function, appropriate constructors are called automatically to initialize them accordingly.

By providing multiple definitions of constructors with different signatures in terms of their parameters, we can accommodate various initialization scenarios while creating instances/objects of our class.


---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Constructor/Copy_constructor)
