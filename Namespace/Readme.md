### Namespace

In C++, a namespace is a feature that allows you to organize code elements, such as variables, functions, and classes, into distinct named scopes. It helps to prevent naming conflicts and provides a way to group related code together.

Syntax:
```C++
namespace namespace_name {
    // code elements (variables, functions, classes) go here
}
```

For example, let's say you want to create a namespace called "myNamespace" and define a function named "myFunction" inside it:
```C++
namespace myNamespace {
    void myFunction() {
        // function implementation
    }
}
```

To use the function from the namespace, you need to specify the namespace name followed by the scope resolution operator (::) and then the function name:
```C++
int main() {
    myNamespace::myFunction();  // calling myFunction from myNamespace
    return 0;
}
```
Alternatively, you can use the "using namespace" directive to avoid specifying the namespace name every time:
```C++
using namespace myNamespace;

int main() {
    myFunction();  // calling myFunction directly
    return 0;
}
```

However, it's generally recommended to avoid using the "using namespace" directive in header files to prevent potential naming conflicts.

Namespaces are particularly useful when working with large codebases or when integrating multiple libraries, as they help keep code organized and minimize naming clashes.

### Two ways
In C++, there are two ways to bring names from a namespace into scope: the namespace directive and the using declaration. These are commonly referred to as the `normal directive` and the `declarative method` respectively.

- <b>Namespace Directive</b>: The namespace directive allows you to bring all the names from a namespace into scope. It has the following syntax:
```C++
namespace namespace_name {
    // code elements (variables, functions, classes) go here
}
``` 

To bring all the names from a namespace into scope using the namespace directive, you can write:
```C++
namespace_name::name;  // Example usage
```
For example, suppose you have a namespace called "myNamespace" with a function named "myFunction" inside it. You can use the namespace directive to bring the function into scope:
```C++
namespace myNamespace {
    void myFunction() {
        // function implementation
    }
}

int main() {
    myNamespace::myFunction();  // using the namespace directive
    return 0;
}
```

- <b>Using Declaration</b>: The using declaration allows you to bring specific names from a namespace into scope. It has the following syntax:
```C++
using namespace_name::name;
```

For example, let's say you have a namespace called "myNamespace" with a function named "myFunction" inside it. You can use the using declaration to bring the function into scope:
```C++
namespace myNamespace {
    void myFunction() {
        // function implementation
    }
}

using myNamespace::myFunction;  // using the using declaration

int main() {
    myFunction();  // calling myFunction directly
    return 0;
}
```

---
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Datatypes)