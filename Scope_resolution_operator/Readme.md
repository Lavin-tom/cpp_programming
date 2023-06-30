### Scope Resolution operator(::)

To access global variable when there is local varibale with same. 

```C++
example:

#include<iostream>
using namespace std;
int x=10;
int main()
{
	int x=200;
	cout<<"local x: "<<x<<endl;
	cout<<"global x: "<<::x<<endl;
}

output:
local x: 200
global x: 10

```
---

[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Reference_operator)
