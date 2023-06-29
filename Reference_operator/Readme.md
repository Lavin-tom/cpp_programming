### Reference Operator
---
Used to provide alias name/duplicate name for existing varibale.

Syntax : `datatype &new_name = existing_name;`
```
example: 

#include<iostream>
using namespace std;
int main()
{
	int data=20;
	int &x = data;
	cout<<"data: "<<data<<endl;
	cout<<"x: "<<x<<endl;
}

output: 
data: 20
x: 20
```

#### Reference to Array
Syntax : `datatype (&new_array)[size] = existing_array; `

```
example: 

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<arr[2]<<endl;
    int (&new_arr)[5] = arr;
    cout<<new_arr[2]<<endl;
}

output: 
3
3
```

#### Reference to Pointer
Syntax : `datatype* (&new_variable) = existing_variable; `

```
example: 

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *b = &a;
    cout<<"a:"<<a<<" "<<"b: "<<*b<<endl;
    int *(&c)=b;
    cout<<"c:"<<*c<<endl;
}

output: 
a: 10 b: 10
c: 10
```

### Points
- Reference variable must be initialized at the time of declaration
- Seperate memory is not created for Reference
- Null reference is not possible 
- One variable can have multiple references
- Reference to reference is not possible   

---
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Argument_passing)