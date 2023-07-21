### Exception handling

It allows you to handle errors or exceptional conditions that may occur during program execution. It helps in separating the error-handling code from the normal flow of the program, making it easier to understand and maintain.

syntax:

```cpp
try {
    // Code that may throw an exception
}
catch (exceptionType1 e1) {
    // Handler for exceptionType1
}
catch (exceptionType2 e2) {
    // Handler for exceptionType2
}
...
catch (...) {
    // Default handler for all other exceptions
}
```

- The code inside the try block contains the statements that may throw an exception.
- If an exception occurs within the try block, control is transferred to the catch block corresponding to the type of exception thrown.
- Each catch block specifies a particular type of exception it can handle. Multiple catch blocks can be used to handle different types of exceptions.
- The ellipsis (...) represents a default catch block that can be used to handle any other unhandled exceptions.

When an exception is caught, you can perform various actions like displaying an error message, logging information, or taking corrective measures. You can also rethrow an exception using "throw;" statement within a catch block if you want another part of your code to handle it.

It's important to note that when an exception is thrown, `stack unwinding` occurs which means all local objects are destroyed until a suitable catch handler is found. This ensures proper cleanup of resources before terminating the program.

C++ provides several built-in classes like std::exception and derived classes such as std::runtime_error and std::logic_error which can be used for throwing and catching specific types of exceptions.

Additionally, you have the option to define your own custom exceptions by creating new classes derived from these base classes.Using proper exception handling techniques in C++ improves robustness and reliability of your code by allowing you to gracefully handle errors and maintain program integrity.

---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/)