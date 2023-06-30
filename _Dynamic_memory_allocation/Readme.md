### Dynamic Memory Allocation

Dynamic memory allocation in C++ allows you to allocate memory dynamically at runtime. It is useful when you don't know the amount of memory you will need beforehand or when you need to allocate memory in the heap.

To dynamically allocate memory in C++, you can use the `new` operator.

example:

```cpp
int* number = new int;  // Allocates memory for a single int
*number = 42;  // Assigns a value to the dynamically allocated int
delete number;  // Frees the dynamically allocated memory
```

In the example above, `new int` allocates memory for a single integer on the heap and returns a pointer to the allocated memory. The `*number = 42` assigns a value of 42 to the allocated memory location. Finally, `delete number` frees the dynamically allocated memory to prevent memory leaks.

we can also allocate arrays dynamically using the `new` operator:

```cpp
int size = 5;
int* numbers = new int[size];  // Allocates memory for an array of integers
numbers[0] = 10;  // Assigns a value to the dynamically allocated array
numbers[1] = 20;
// ...
delete[] numbers;  // Frees the dynamically allocated memory for the array
```

In this example, `new int[size]` allocates memory for an array of integers with the specified size. The `delete[] numbers` statement is used to free the memory allocated for the array.

Remember to always deallocate dynamically allocated memory using the `delete` operator (`delete[]` for arrays) to avoid memory leaks.

---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Structure)
