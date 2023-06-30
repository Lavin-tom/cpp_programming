### Inline function

 An inline function is a function that is expanded by the compiler at the location where it is called, rather than being executed as a separate function call. 

To define an inline function in C++, the keyword `inline` is placed before the function declaration. For example:

```C++
inline int multiply(int x, int y) {
    return x * y;
}
```

When an inline function is called, `the compiler replaces the function call with the actual code of the function`. This eliminates the overhead of making a function call, resulting in faster execution. 

#### Notes :
- inline keyword is just a suggestion to the compiler, and the compiler is free to decide whether or not to actually inline the function.
 -  inline functions should be kept small, as large functions may not be suitable for inlining.

---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Dynamic_memory_allocation)