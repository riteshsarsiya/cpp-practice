//  #29
// #include<iostream>
// using namespace std;
// class complex{
//     int a ,b;
//     public:
//      // Creating a Constructor
//     // Constructor is a special member function with the same name as of the class.
//     //It is used to initialize the objects of its class
//     //It is automatically invoked whenever an object is created
    
//     complex(void); //constructor declaration
//     void printNumber(){
//         cout<<"your number is : "<<a<<" + "<<b<<"i"<<endl;
//     }

// };
//  complex::complex(void){  // this is default constructor is no parameter 
//     a =5;
//     b= 10;
// }
// int main(){
//     complex c;
//     c.printNumber();
//     return 0;
//    /* Important Characteristics of Constructors in C++

// A constructor should be declared in the public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have return types
// It can have default arguments
// We cannot refer to their address*/
// }

// #include<iostream>
// using namespace std;
// class Student{
//     int id,rno;
//     char name[30];
//     public:
//     Student(void); //constructor
    
//     void display(){
//         cout<<"student id : "<<id<<" rno : "<<rno<<" name :"<<name<<endl;
//     }
// };
// Student::Student(void){
//     cout<<"enter id : "<<endl;
//     cin>>id;
//     cout<<"enter a rno : "<<endl;
//     cin>>rno;
//     cout<<"enter a name : "<<endl;
//     cin>>name; 
// }
// int main(){
//     Student s;
//     s.display();
//     return 0;
// }



// // Parameterized and Default Constructors In C++ | C++ Tutorials for Beginners #30
// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     public:
//     complex(int ,int );
//     void printNumber(){
//         cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// complex::complex(int x, int y){ //This is a parameterized constructor as it takes 2 parameters
//     a=x;
//     b=y;
//    // cout<<"hello ";
// }
// int main(){
//     complex c(4,5);
//     c.printNumber();

//     complex s(3,6);
//     s.printNumber();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class point{
//     int x,y;
//     public:
//     point(int a,int b){
//         x=a;
//         y=b;
//     }
//     void display_Number(){
//         cout<<"pinter is ("<<x<<"," <<y<<")"<<endl;

//     }
// };
// int main(){
//     point c(4,5);
//     c.display_Number();

//     point s(2,4);
//     s.display_Number();
//     return 0;

// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// class point{
//     double x,y;
//     public:
//     point(int a,int b){
//         x=a;
//         y=b;
//     }
//     void display_Number(){
//         cout<<"pinter is ("<<x<<"," <<y<<")"<<endl;

//     }
//    friend void distance(point , point);
  
// };
// void distance(point p1,point p2){
//    int r=(p2.x - p1.x);
//    int s=(p2.y-p1.y);
//    float m=sqrt(r*r+s*s);
//    cout<<" distance is : "<<m<<endl;

// }

// int main(){
//     point c(4,5);
//     point s(2,4);
   
//     distance(c,s);

//      point g(4,12);
//     point h(2,3);
//     distance(g,h);
   
//     return 0;

// }



//                               Constructor Overloading In C++ | C++ Tutorials for Beginners #31

#include<iostream>
using namespace std;
int main(){
    cout<<"hellp";
    return 0;
}

