### Structure

A structure is a user-defined data type that allows you to group together related data elements of different types into a single unit. It provides a way to represent a collection of variables that are logically connected.

Key Points - 

1. Definition and Declaration:
   - Structures are defined using the `struct` keyword, followed by the structure name.
   - The structure definition includes the member variables, each with its own data type and name.
   - Example:
     ```cpp
     struct Person {
         string name;
         int age;
         float height;
     };
     ```

2. Accessing Structure Members:
   - Once a structure is defined, you can declare variables of that structure type.
   - To access the member variables of a structure, you use the dot (`.`) operator.
   - Example:
     ```cpp
     Person person1;
     person1.name = "John";
     person1.age = 25;
     person1.height = 175.5;
     ```

3. Initialization:
   - You can initialize structure variables during declaration.
   - Example:
     ```cpp
     Person person2 = {"Jane", 30, 162.0};
     ```

4. Passing and Returning Structures:
   - You can pass structures as function parameters and return them from functions.
   - By default, structures are passed by value, which means a copy of the structure is made.
   - You can also pass structures by reference or pointer for efficiency.
   - Example:
     ```cpp
     void displayPerson(const Person& person) {
         cout << "Name: " << person.name << endl;
         cout << "Age: " << person.age << endl;
         cout << "Height: " << person.height << endl;
     }
     ```

5. Nested Structures:
   - Structures can be nested within other structures, allowing for hierarchical data representation.
   - Example:
     ```cpp
     struct Address {
         string street;
         string city;
         string zipCode;
     };

     struct Person {
         string name;
         int age;
         Address address;
     };
     ```

#### Why empty structure return size as one Byte?

example:
```cpp
#include<iostream>
using namespace std;
struct empty
{

};
int main()
{
	empty em;
	cout<<"Size of structure: "<<sizeof(em)<<endl;
}


output 
Size of structure: 1

```
An empty structure is assigned a size of at least 1 byte to ensure that distinct instances of the structure have different addresses. This is known as the `empty structure rule.`

The size of an empty structure is not zero to adhere to the principle that each object should have a unique address in memory. If the size of an empty structure were zero, then two distinct instances of the empty structure would have the same address, violating this principle.

By assigning a minimum size of 1 byte to an empty structure, the compiler ensures that each instance of the structure has a distinct address. 


---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/)
