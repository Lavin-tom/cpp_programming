#include<iostream>
using namespace std;
class Rectangle {
private:
    int width;
    int height;

public:
    // Default constructor
    Rectangle() {
        width = 0;
        height = 0;
    }

    // Constructor with two integer parameters
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

   // Constructor with one integer parameter (square)
   Rectangle(int sideLength) {
       width = sideLength;
       height = sideLength;
   }
   void display()
   {
    cout<<"width: "<<width<<" height: "<<height<<endl;
   }
};

int main() {
   Rectangle rect1;                // Using default constructor

   Rectangle rect2(4, 5);          // Using parameterized constructor

   Rectangle square(3);            // Using overloaded constructor for squares
   
   rect1.display();
   rect2.display();
   square.display();
   return 0; 
}