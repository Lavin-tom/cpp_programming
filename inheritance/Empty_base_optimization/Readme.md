### Empty Base Optimization

An empty class still occupies memory, typically 1 byte. This is known as the `empty base optimization` or `padding rule`.

The reason for this behavior is to ensure that each instance of a class has a unique address. Even if a class does not have any member variables, it still requires some memory space to guarantee distinct addresses for different objects.

Consider the following example:

```cpp
class EmptyClass {
};
```

When you create an object of `EmptyClass`, it will occupy at least 1 byte in memory. This ensures that every object has its own unique address.

However, note that compilers are allowed to optimize this behavior and may choose not to allocate any memory for an empty class if certain conditions are met. For example, if multiple empty classes are inherited virtually or non-virtually by another class, the compiler can combine their storage into a single byte.

To verify the size of an empty class in your specific environment/compiler, you can use the `sizeof` operator:

```cpp
cout << sizeof(EmptyClass) << endl;
```

---
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Inheritance/)
