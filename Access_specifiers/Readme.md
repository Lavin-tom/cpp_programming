### Access Specifier

Access specifiers are keywords used to control the visibility and accessibility of class members (variables, functions, or nested classes) from outside the class. There are three access specifiers in C++: `public`, `private`, and `protected`.

1. Public :
   - Members declared as public can be accessed by any code that includes the class declaration.
   - They have no restrictions on their accessibility.
   - Public members are typically used for interface methods or variables that need to be accessible from external code.

2. Private :
   - Members declared as private cannot be accessed directly by code outside the class.
   - They are only accessible within the same class where they are declared.
   - Private members encapsulate internal implementation details and should not be modified or accessed directly from external code.

3. Protected :
   - Members declared as protected have similar behavior to private members but with one key difference: they can also be accessed by derived classes (subclasses).
   - Protected members provide a level of access between private and public, allowing derived classes to inherit and use them while still restricting direct access from external code.

The `default access specifier` is differs depending on whether you define a struct or a class. 

- For struct, all its members default to being public.
- For class, all its members default to being private.

Here's an example illustrating how access specifiers work:

```cpp
class MyClass {
public:
    int publicVar;
    
protected:
    int protectedVar;

private:
    int privateVar;
};

int main() {
    MyClass obj;
    
    // Can access public member
    obj.publicVar = 10; 
    
    // Cannot directly access protected or private member
    //obj.protectedVar = 20; // Error: inaccessible 
    //obj.privateVar = 30; // Error: inaccessible
    
    return 0;
}
```

 `publicVar` can be accessed outside the class while `protectedVar` and `privateVar` are inaccessible.

---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/This_Pointer)
