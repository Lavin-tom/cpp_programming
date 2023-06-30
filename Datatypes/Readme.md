## Datatypes


### Bool
`bool` data type is used to represent Boolean values, which can be either `true` or `false`. It is typically used in conditional statements, logical operations, and boolean expressions.

In memory, a bool value is usually stored as 1 byte, where a value of 1 represents true and a value of 0 represents false.

example:
```c++
bool isTrue = true;  // declaring and initializing a bool variable

if (isTrue) {
    // code to be executed if isTrue is true
    cout << "The value is true." << endl;
} else {
    // code to be executed if isTrue is false
    cout << "The value is false." << endl;
}

```
To print true or false we can use  `boolalpha`

example:
```c++
#include<iostream>
using namespace std;
int main()
{
    bool a = 1;
    cout << boolalpha << a << endl;
}

output:
true
```
#### Why size of `bool` is one byte?
The size of a bool is typically one byte, which is equivalent to 8 bits. This size is chosen to ensure that a bool variable can hold either true or false values.

Although a bool logically represents a single bit of information (1 or 0), using a whole byte provides several advantages:

- Memory Alignment: Memory is usually organized in byte-sized chunks, and accessing single bytes is generally more efficient than accessing individual bits.

- Compatibility: Many computer architectures and programming languages are designed to work with bytes as the smallest addressable unit of memory. Using a single byte for a bool allows for easier interoperability and compatibility between different systems and programming languages.

- Simplicity: Using a byte for a bool simplifies memory management and makes it consistent with other data types. It avoids complexities that could arise from manipulating individual bits directly.

---

### wchar_t
- `wchar_t` is a built-in data type that represents a wide character. It is used to store Unicode characters that may require more than a single byte to represent.

- The wchar_t type is typically used when working with wide strings or characters that are outside the ASCII range. It ensures that characters from various character sets, including non-Latin scripts, can be represented accurately.

- The size of wchar_t is implementation-defined and can vary depending on the platform and compiler. It is guaranteed to be large enough to hold the largest supported wide character set for the target environment.CopyCopy

- In most modern systems, wchar_t is 2 or 4 bytes in size, allowing it to accommodate a wide range of Unicode characters. The exact size can be determined using the `sizeof` operator.



### string
`string` data type is used to represent and manipulate text or character sequences. It is part of the C++ Standard Library and provides a more convenient and flexible way to work with strings compared to C-style character arrays.


- Header File Inclusion:
To use string, you need to include the `<string>` header file in your C++ program.

- Dynamic Size:
Unlike fixed-size character arrays, string can dynamically grow or shrink to accommodate the length of the string. You don't need to specify the size beforehand.

- Easy Initialization:
You can initialize an string using various methods:

  - Direct initialization: string str = "Hello";
  - Copy initialization: string str("Hello");
  - Assignment: string str; str = "Hello";

- String Operations: 
string provides a wide range of member functions for common string operations, including:

    - Accessing individual characters: str[i], str.at(i)
    - Concatenation: str1 + str2, str1.append(str2)
    - Length: str.length(), str.size()
    - Substring extraction: str.substr(startIndex, length)
    - Searching for substrings: str.find(substring), str.rfind(substring)
    - Modifying strings: str.replace(), str.erase(), str.insert()
    - Comparison: str1 == str2, str1 < str2, etc.
- String Input and Output:
string can be easily read from and written to the standard input/output streams using the familiar `>>` and `<<` operators.


---
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Function_overloading)