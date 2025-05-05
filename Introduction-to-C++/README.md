### Introduction
## C++
- C++ is a general purspose programming language
- It is regarded as an intermediate level language ( a combination of both high level and low level language feature)
- It was developed by [`Bjarne Stroustrup`](https://en.wikipedia.org/wiki/Bjarne_Stroustrup) in 1979 at Bell Labs as an enhancement to the C language.
- As a matter of fact, C++ run most of C code while C cannot run C++ code.

#### Procedural Oriented Programming
-   aka functional oriented, pgrms with functions, local and global variables. 
-   Loops concept are not allowed
-   C, Pascal, Cobal etc

#### Structural Oriented Programming
-   control statements and user defined data types added along with procedural 
-   C, Pascal, Cobal etc

#### Object Oriented Programming
-   writing instructions in the form of object instead of seqential instruction
-   C++, Java etc

#### Why C++ / Limitation of C
-   Not possible to create duplicate name for an existing variable in c
-   Not possible to allocate dma using operators
-   Not possible to create blocks for global variable with same name for local variable 
-   Can't handle run time errors
-   Can't access global variable if local variable contain same name without pointers, another variable etc
-   Can't use same function defenition for different datatype

#### Features of C++
- Encapsulation 
    - wrapping up of data and function into a single unit
- Abstraction
    - with the help of access specifiers (private, protected, public) we can set the visibility
- Polymorphism
    - all functionalities are same
- Inheritance
    - Reuse and extend the functionalities 

#### Difference b/w C and C++

|C|C++|
|-|-|
|Procedural Oriented Language|Procedural + Object oriented Language|
|Importance to Procedure|Importance to Data|
|Data is not secured|Data is Secured|
|Encapsulation not possible|Encapsulation possible|
|Not follow Strict type check|Follow strict type check|
|Not possible function overloading|Function overloading is possible|
|Using of function inside structure is not possible | Use of function inside structure is possible |
|Not have Exception Handling|Having exception handling|
|Template is not available|Template is available|

```C++
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter name.."<<endl;
    cin>>name;
    cout<<"Hello "<<name<<endl;
}
```
`#include<iostream>` - flow of data from one end to another end

`cout` : o stream object of istream class/console output

`cin` : i stream object of ostream class/console input

`endl` : manipulator - is a function equalant to `\n`

`>>` extraction operator

`<<` insertion operator



---

[Scope Resolution Operator](https://github.com/Lavin-tom/cpp_programming/tree/master/Scope_resolution_operator)
