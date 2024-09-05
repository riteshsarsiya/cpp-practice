//  #29
// #include<iostream>
// using namespace std;
// class Complex{
//     int a ,b;
//     public:
//      // Creating a Constructor
//     // Constructor is a special member function with the same name as of the class.
//     //It is used to initialize the objects of its class
//     //It is automatically invoked whenever an object is created
    
//     Complex(void); //constructor declaration
//     void printNumber(){
//         cout<<"your number is : "<<a<<" + "<<b<<"i"<<endl;
//     }

// };
//  Complex::Complex(void){  // this is default constructor is no parameter 
//     a =5;
//     b= 10;
// }
// int main(){
//     Complex c;
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
// class Complex{
//     int a,b;
//     public:
//     Complex(int ,int );
//     void printNumber(){
//         cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// Complex::Complex(int x, int y){ //This is a parameterized constructor as it takes 2 parameters
//     a=x;
//     b=y;
//    // cout<<"hello ";
// }
// int main(){
//     Complex c(4,5);
//     c.printNumber();

//     Complex s(3,6);
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

// #include<iostream>
// using namespace std;

// class Complex{
//     int a,b;
//     public:
//     Complex(){
//        a = 0;
//        b = 0;
//     }
//     Complex(int x){
//         a=x;
//         b=0;
//     }
//     Complex(int x, int y){
//         a=x;
//         b=y;

//     }
//     void printNumber(){
//         cout<<" your number is :" <<a<<" + "<<b<<"i"<<endl;
        
//     }

// };
// int main(){
//    Complex c1;
//    c1.printNumber();

//    Complex c2(5);
//    c2.printNumber();

//    Complex c3(1,6);
//    c3.printNumber();

//     return 0;
// }


// Constructors With Default Arguments In C++ | C++ Tutorials for Beginners #32

// #include<iostream>
// using namespace std;

// class Simple{
//     int data1;
//     int data2;
//     int data3;
//     public :
//     Simple(int a, int b=5, int c=8){// Default arguments
//       data1=a;
//       data2=b;
//       data3=c;
//     }
//     void printData();
// };
 
//  void Simple::printData(){
//     cout<<"the value of data1,data2 and data3 : "<<data1<<" , "<<data2<<" and "<<data3<<endl;

//  }
//  int main(){
//     Simple c1(3);
//     // Simple c1(3,5,6);
//     c1.printData();

//     return 0;
//  }
 

//  Dynamic Initialization of Objects Using Constructors | C++ Tutorials for Beginners #33

// #include<iostream>
// using namespace std;
// class BankDeposit{
//     int principle;
//     int year;
//     float intrestrate;
//     float returnValue;
//     public:
//     BankDeposit(){}
//     BankDeposit(int p,int y,float r);// r can be a value like 0.04
//     BankDeposit(int p,int y,int r);// r can be a value like 14
//     void show();
// };
//  BankDeposit::BankDeposit(int p,int y,float r){
//     principle=p;
//     year   = y;
//     intrestrate = r;
//     returnValue=principle;
//     for(int i=0; i<y;i++){
//         returnValue = returnValue*(1+intrestrate);
//     }
//  }
 
//  BankDeposit::BankDeposit(int p,int y,int r){
//     principle=p;
//     year   = y;
//     intrestrate = float(r)/100;
//     returnValue=principle;
//     for(int i=0; i<y;i++){
//         returnValue = returnValue*(1+intrestrate);
//     }
//  }

//  void BankDeposit::show(){
//     cout<<endl<<"principle amound was "<<principle
//     <<" returnvalue after "<<year
//     <<" year is "<<returnValue<<endl;

//  }
//  int main(){
//     BankDeposit bd1,bd2,bd3;
//     int p,y;
//     float r;
//     int R;
    
//     cout<<"enter your p,yand r "<<endl;
//     cin>>p>>y>>r;
//     bd1=BankDeposit(p,y,r);
//     bd1.show();

//      cout<<"enter your p,yand R "<<endl;
//     cin>>p>>y>>R;
//     bd2=BankDeposit(p,y,R);
//     bd2.show();
//     return 0;
    
//  }
 
 
// Copy Constructor in C++ | C++ Tutorials for Beginners #34
// #include <iostream>
// using namespace std;
// class Number{
//     int a;
//     public:
//     Number(){
//         a=0;
//     }
//     Number(int num){
//     a=num;
//     }
//             // When no copy constructor is found, compiler supplies its own copy constructor

//     Number(Number &obj){
//         cout<<"The copy constructor call !! "<<endl;
//         a=obj.a;
//     }
//     void display(){
//         cout<<"The number of this object is "<<a<<endl;
//     }
// };
// int main(){
//     Number x,y,z(45),z2;
//     x.display();
//     y.display();    
//     z.display();

//     Number z1(z);// Copy constructor invoked
//     z1.display();
    
//     // z2.display(); // Copy constructor not called
//     // z2.display();

//     Number z3=z;//Copy constructor invoked
//     z3.display();

//  // z1 should exactly resemble z  or x or y

//      return 0; 
// }
 


//     Destructor in C++ in Hindi | C++ Tutorials for Beginners #35

#include<iostream>
using namespace std;
// Destructor never takes an argument nor does it return any value 
int count = 0;
class num{
    public:
    num(){
        count ++;
        cout<<"This is the time when constructor is called for object number "<<endl;
    }
    ~num(){
       
        cout<<"This is the time when my destructor is called for object number "<<endl;
         count--;
    }

};
int main(){
    cout<<"we are inside the main function "<<endl;
    cout<<"Create to more object "<<endl;
    num n1;
    {
        cout<<"entring this black "<<endl;
        cout<<"creating two more object "<<endl;
        num n2,n3;
        cout<<"exting this black "<<endl;
    }
    cout<<"back to main "<<endl;
    return 0;

}