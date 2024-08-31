// Pointer 
// what is pointer ---> data type which hold the address of other data type 
// #include<iostream>
// using namespace std;
// int main(){
//     int a=3;
//     int * b =&a;

//     //& ----> address of operator 
//     cout<<"The address of a is "<<b<<endl;
//     cout<<"The address of a is "<<&a<<endl;

//     //  * ----> (value at) Dereference operator 
//     cout<<"The value at address b is : "<<*b<<endl; 


//     // pointer to pointer 
//     int **c=&b;
//     cout<<" the address of b is "<<&b<<endl;
//     cout<<" the address of b is "<<c<<endl;
//     cout<<"the value at address c is "<<*c<<endl;
//     cout<<"the value at address value_at (value_at(c)) is "<<**c<<endl;
//     return 0;
// }



// change value pointer by pointer 

#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *p = &a;

    cout<<"the addres of : "<<a<<endl;
    cout<<" the address of : "<<*p<<endl
    
    <<endl;
    cout<<"change the value of a "<<endl;

    a=5;
    cout<<"the address of value is "<<a<<endl;
    cout<<"the address of value is "<<*p<<endl

    <<endl;

    cout<<"change the pointer value P"<<endl;

    *p = 8;

     cout<<" the value of "<<a<<endl;
     cout<<" the value of "<<*p<<endl;
     return 0;
}


//------->> Array

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[]={23,42,56,34};
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int marks[]={23,42,56,34};

//     for(int i=0; i<4; i++){
//         cout<<"the value marks : "<<i<<" is "<<marks[i]<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[]={23,42,56,34};

//     int i=0;
//     while(i<4){
//         cout<<"the value of marks : "<<i<<" is "<<marks[i]<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[]={23,42,56,34};
//     int i=0;
// do{
//       cout<<"the value of marks : "<<i<<" is "<<marks[i]<<endl;
//       i++;
// }while(i<4);
    
    
//     return 0;
// }

// array & pointer 

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[]={23,42,56,34};
//    int *p=marks;
//    cout<<"the value of *p :"<<*p<<endl;
//    cout<<"the value of *(p+1) :"<<*(p+1)<<endl;
//    cout<<"the value of *(p+2) :"<<*(p+2)<<endl;
//    cout<<"the value of *(p+3) :"<<*(p+3)<<endl;


//     return 0;
// }




//  --------------->>>>Structure

// #include<iostream>
// using namespace std;
// struct employee
// {
//     int Eid;
//     char Favchar;
//     float salary;
// };

// int main(){
//     struct employee ritesh;
//     ritesh.Eid=1;
//     ritesh.Favchar='r';
//     ritesh.salary=450000000;

//     cout<<"the value is : "<<ritesh.Eid<<endl;
//     cout<<"the value is : "<<ritesh.Favchar<<endl;
//     cout<<"the value is : "<<ritesh.salary<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
//  typedef struct employee
// {
//     int Eid;
//     char Favchar;
//     float salary;
// }ep;

// int main(){
//     ep ritesh;
//     ritesh.Eid=1;
//     ritesh.Favchar='r';
//     ritesh.salary=450000000;

//     cout<<"the value is : "<<ritesh.Eid<<endl;
//     cout<<"the value is : "<<ritesh.Favchar<<endl;
//     cout<<"the value is : "<<ritesh.salary<<endl;
//     return 0;
// }


// Program to assign data to members of a structure variable
// #include<iostream>
// using namespace std;
// struct persion
// {
//     string first_name;
//     string last_name;
//     int Eid;
//     float salary;
// };
// int main(){
//     persion p1 ;
//     cout<<"enter  first name : ";
//     cin>>p1.first_name;
//     cout<<"enter last name : ";
//     cin>>p1.last_name;
//     cout<<"enter id";
//     cin>>p1.Eid;
//     cout<<"enter salary : ";
//     cin>>p1.salary;


//     cout<<"first name :"<<p1.first_name<<endl;
//     cout<<"last name :"<<p1.last_name<<endl;
//     cout<<"Eid :"<<p1.Eid<<endl;
//     cout<<"salary :"<<p1.salary<<endl;
//     return 0;
// }



/// member function
// #include<iostream>
// using namespace std;
// struct persion
// {
//     string first_name;
//     string last_name;
//     int Eid;
//     float salary;

// // member function to display information about the person

//    void display_Info(){
//     cout<<"first name :"<<first_name<<endl;
//     cout<<"last name :"<<last_name<<endl;
//     cout<<"Eid :"<<Eid<<endl;
//     cout<<"salary :"<<salary<<endl;

//    }
// };
// int main(){
//     persion p1 ;
//     cout<<"enter  first name : ";
//     cin>>p1.first_name;
//     cout<<"enter last name : ";
//     cin>>p1.last_name;
//     cout<<"enter id";
//     cin>>p1.Eid;
//     cout<<"enter salary : ";
//     cin>>p1.salary;
     
//      //display information using member function
//      cout<<"";
//      p1.display_Info();
//     return 0;
// }





// ------->>Union

// #include<iostream>
// using namespace std;
// union clg
// {
//     int age;
//     char grade;
//     float gpa;
// };
// int main(){
//     union clg student1;
//     student1.age = 25;
//     cout<<"age "<<student1.age<<endl;
//     student1.grade = 'B';
//     cout<<"grade "<<student1.grade<<endl;
//     student1.gpa = 7.8;
//      cout<<"gpa "<<student1.gpa<<endl;
//     return 0;
// }



//-------------> Enum
// #include<iostream>
// using namespace std;
// int main(){
//     enum meal { breakfast, lunch,dinner};
//     cout<<breakfast;
//     //meal m1= lunch;
//     //cout<<m1;
//     return 0;
// }


//Example: Enumeration Type
// #include<iostream>
// using namespace std;
// enum week {sunday,monday,tuesday,wednesday,thursday,friday, saturday};
// int main(){
//      week today= sunday;
//      cout<<"today "<<today;
//      return 0;
// }


//------------>>>Funtion

// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     int c=a+b;
//     return c;
// }
// int main(){
//     int num1,num2;

//     cout<<"enter a first number : "<<endl;
//     cin>>num1;
//     cout<<"enter a second number : "<<endl;
//     cin>>num2;
//     cout<<"the sum is "<<sum(num1,num2);
//     return 0;
// }


// program to print a text

// #include<iostream>
// using namespace std;
// void displayNum(int n1 , float n2){
//     cout<<"the int number is "<<n1<<endl;
//     cout<<"the double number is "<<n2<<endl;
// }
// int main(){

//     int num1=5;
//     double num2=5.5;
//     displayNum(num1,num2);
//     return 0;
// }

// program to add two numbers using a function

// #include<iostream>
// using namespace std;
// int add(int a, int b){
//     int c=a+b;
//     return c;
// }
// int main(){
//     int num1=45;
//     int num2=40;
//     cout<<"add two number : "<<add(num1,num2);
//     return 0;

// }


//functiom prototype 
//type function- name (argument )

// #include<iostream>
// using namespace std;

// int sum(int a,int b);
// void g();

// int main(){
//     int num1,num2;

//     cout<<"enter a first number : "<<endl;
//     cin>>num1;
//     cout<<"enter a second number : "<<endl;
//     cin>>num2;
//     cout<<"the sum is "<<sum(num1,num2);
//     g();
//     return 0;
// }

//     int sum(int a, int b){
//     int c=a+b;
//     return c;
// }
// void g(){
//     cout<<"\nhello";
// }



// call by value & call by refrece

// #include <iostream>
// using namespace std;
// // call by refrence value using pointer 
// void swapPointer(int* a,int* b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x, y;
//     x=4,y=5;
//     cout<<"the value of x is "<<x<<"and y "<<y<<endl;
//     swapPointer(&x,&y);
//     cout<<"the value of x is "<<x<<"and y "<<y<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// // call by refrence using C++ refrence variable 
// void swapRefrenceVar(int &a, int &b){
//     int temp =a;
//      a=b;
//      b=temp;

// }
// int main(){
//     int x =4,y=5;
//     cout<<"the value of x is "<<x<<"and "<<y<<endl;
//     swapRefrenceVar(x,y);
//     cout<<"the value of x is "<<x<<"and "<<y<<endl;
//     return 0;

// }


//---------->inline function 
// #include <iostream>
// using namespace std;

// inline int product(int a,int b){
//     return a*b;
// }
// int main(){
//     int a,b;
//     cout<<"enter a number : ";
//     cin>>a>>b;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     return 0;
// }

//--------->> default argument 

// #include<iostream>
// using namespace std;
// float moneyReceived(int currentMoney,float factor=1.04){
//     return currentMoney*factor;

// }
// int main(){

//     int money = 100000;
//     cout<<" if you have "<<money<<" Rs in your bank account , you will receive "<<moneyReceived(money)<<" after 1 year "<<endl;
//     cout<<" for vip : if you have "<<money<<" Rs in your bank account , you will receive "<<moneyReceived(money,1.1)<<" after 1 year ";
//     return 0;

// }



//------------>> constant argument;

// #include<iostream>
// using namespace std;
// int strlen(const char *p)
// int main(){

// }

//---------->>recursion


// #include <iostream>
// using namespace std;
// int factorial(int n){
//     if(n<=1)
//     return 1;
//     return n* factorial(n-1);
// }
// int main(){
//     int a;
//     cout<<"enter a number "<<endl;
//     cin>>a;
//     cout<<"the factoial  "<<a<<" is "<<factorial(a)<<endl;

//     return 0;
// }


//---------->> fibonacci 

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n<2){
//         return 1;
//     }
//     return fib(n-2) + fib(n-1);
// }
// int main(){
//      int a;
//      cout<<"enter a number : ";
//      cin>>a;
//      cout<<"the term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
     
//     return 0;
// }


//---------->> function overloading 
// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//     // using function with 2 argument 
//     return a+b;
// }
// int sum(int a, int b, int c){
//     // using fucntion with 3 argument
//     return a+b+c;
// }
// int main(){
//     cout<<"The sum of 3 and 6 is : "<<sum(3,6)<<endl;
//     cout<<"The sum of 3,7and 6 is : "<<sum(3,7,6);
//     return 0;

// }

// #include<iostream>
// using namespace std;
//  // calculate the cylinder
// int volume(double r, int h){
//     return(3./14*r*r*h);
// }
// // calculate the volume of a cube 
// int volume(int a){
//     return(a*a*a);
// }
// // rectangular box
// int volume(int l,int b, int h){
//     return (l*b*h);
// }
// int main(){
//     cout<<"the valume of cylinder of radius 3 and height 6 is : "<<volume(3,6)<<endl;
//     cout<<"the volume of cube of side 3 is : "<<volume(3)<<endl;
//     cout<<"the volume of cuboid of 3,7and 6 is : "<<volume(3,7,6)<<endl;
//     return 0;
// }

