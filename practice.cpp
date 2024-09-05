// #include<iostream>
// using namespace std;
// int main(){
//     // pointer
//     int a=3;
//     int* p=&a;
//     cout<<*p;
//     return 0;
// }

// array
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int marks[]={23,45,234,32};
//      //cout<<marks[3];

//     for(int i=0; i<=3; i++){
//         cout<<i<<" is "<<marks[i]<<endl;
//     }
//     return 0;
// }

// structure
// #include <iostream>
// using namespace std;
// struct employy{
//     int id;
//     char favchar;
//     float salary;
// };
// int main(){
//     struct employy ritesh;
//     ritesh.id=1;
//     ritesh.favchar='s';
//     ritesh.salary=12000000000;
//     cout<<ritesh.id<<endl;
//     cout<<ritesh.favchar<<endl;
//     cout<<ritesh.salary<<endl;
//     return 0;
// }

// union

// #include<iostream>
// using namespace std;
// union clg
// {
//   int age;
//   char gred;
//   float cgpa;
// };
// int main(){
//     union clg student1;
//     student1.age=20;
//     cout<<" age "<<student1.age<<endl;
//     student1.gred='A+';
//     cout<<"gread "<<student1.gred<<endl;
//     student1.cgpa=10;
//     cout<<"cgpa "<<student1.cgpa<<endl;
//     return 0;
// }

// enum
//  #include<iostream>
//  using namespace std;
//  enum morrnig{breakfast,lunch,dinner };
//  int main(){
//       morrnig m1= lunch;
//       cout<<m1;
//       return 0;
//  }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     cout<<"factoral of "<<n;
//     for(int i=1; i<=n; i++){
//         if(n%i==0)
//             cout<<i<<endl;

//     }
//     return 0;
// }

// function

// #include<iostream>
// using namespace std;
// // strucure
// struct employe{
//     int eid;
//     char  favchar;
//     float salary;
// };
// int main(){
//     struct employe ritesh;
//     ritesh.eid=3;
//     ritesh.favchar='s';
//     ritesh.salary=10000000000;
//     cout<<"id of ritesh "<<ritesh.eid<<endl;
//     cout<<"fav of ritesh "<<ritesh.favchar<<endl;
//     cout<<"salary of ritesh "<<ritesh.salary<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// union clg{

//     int id;
//     float fish;

// };
// int main(){
//     union clg student1;
// //union
//     student1.id = 11;
//     cout<<"student id : "<<student1.id<<endl;
//     student1.fish = 15000;
//     cout<<"student fish : "<<student1.fish<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
//  //enum
// enum year { first_yr , second_year, third_yr, four_yr};
// int main(){
//      year sem= first_yr;
//      cout<<sem;
//      return 0;
// }

// #include<iostream>
// using namespace std;
//  // function
//  int sum(int a,int b){
//     return a*b;
//  }
//  int main(){
//     int a=4,b=4;
//     cout<<"the sum is "<<sum(a,b);
//     return 0;
//  }

// #include<iostream>
// using namespace std;
// // function prototype (argument )
// int sum(int a,int b);
// int main(){
//     int a=4,b=5;
//     cout<<"the sum is "<<sum(a,b);
//     return 0;
// }
// int sum(int a,int b){
//     return a*b;
// }

// #include<iostream>
// using namespace std;
// // call by value in pointer ;
// void swapPointer(int *a,int* b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x=4,y=5;
//     cout<<" swap the value of x : "<<x<<" swap the y : "<<y<<endl;
//     swapPointer(&x,&y);
//     cout<<" swap the value of x : "<<x<<" swap the y : "<<y;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // call by value in refrence var
// void swapVar(int &a,int &b){
//    int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int x=4,y=5;
//     cout<<"the swa value is x : "<<x<<" and y : "<<y<<endl;
//     swapVar(x,y);
//     cout<<"the swa value is x : "<<x<<" and y : "<<y<<endl;
//  return 0;
// }

// #include<iostream>
// using namespace std;
// // inline function
// inline int product(int a , int b){
//     return a*b;
// }
// int main(){
//     int sum1, sum2;
//     cout<<"enter the value : ";
//     cin>>sum1>>sum2;
//     cout<<"the product is : "<<product(sum1,sum2)<<endl;
//      cout<<"the product is : "<<product(sum1,sum2)<<endl;
//       cout<<"the product is : "<<product(sum1,sum2)<<endl;
//        cout<<"the product is : "<<product(sum1,sum2)<<endl;
//         cout<<"the product is : "<<product(sum1,sum2)<<endl;
//          cout<<"the product is : "<<product(sum1,sum2)<<endl;
//           cout<<"the product is : "<<product(sum1,sum2)<<endl;
//            cout<<"the product is : "<<product(sum1,sum2)<<endl;
//             cout<<"the product is : "<<product(sum1,sum2)<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// //defualt argument
// int sum(int x,int y, int z=0, int w=0){
//     return (x+y+z+w);
// }
// int main(){
//     cout<<sum(10,15)<<endl;
//     cout<<sum(10,15,14)<<endl;
//     cout<<sum(10,11,12,33)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// //recurtion

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//     int a;
//     cout<<"enter the value";
//     cin>>a;
//     cout<<"the factorial of : "<<a<<" is "<<factorial(a)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // recurtion
// // C++ Program to calculate the sum of first N natural
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int res;
//     return res= n+sum(n-1);
// }
// int main(){
//     int a=5;

//     cout<<sum(a);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // function over loading ;
// int sum(int a,int b){
//     return (a+b); // function with 2 argumrnt

// }
// int sum(int a,int b,int c){
//     return (a+b+c);//function with 3 argument;

// }
// int main(){
//     cout<<"the sum of 3,5 : "<<sum(3,5)<<endl;
//     cout<<"the sum of 3,2,5 : "<<sum(3,4,2)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // class and object
// class employe
// {
//     private:
//     int a, b, c;
//     public:
//     int d,e;
//     void setData(int a1,int b1,int c1);
//     void getData(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//         cout<<d<<endl;
//         cout<<e<<endl;
//     }

// };
// void employe::setData(int a1,int b1, int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }
// int main(){
//     employe ritesh;
//     ritesh.d =45;
//     ritesh.e = 34;
//     ritesh.setData(12,34,54);
//     ritesh.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// //  class
// class room
// {

//     public:
//     double lenght;
//     double breath;
//     double height;
//    double calculate_area (){
//     return (lenght*breath);
//    }

//   double calculate_lenght(){
//         return (lenght*breath*height);
//     }

// };
// int main(){
//     room rm1;
//     rm1.breath=23.2;
//     rm1.height=33.1;
//     rm1.lenght=23.21;
//    cout<<"area calculate : "<< rm1.calculate_area()<<endl;
//     cout<<"lenght caculate : " <<rm1.calculate_lenght()<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// //  class
// class clg{
//     private :
//     int roll_number;
//     string name ;
//     public :
//    void setClg(int roll_number_std,string name_student) {
//     roll_number = roll_number_std;
//     name=name_student;
//    }
//    void getClg(){
//     cout<<roll_number<<endl;
//     cout<<name<<endl;
//    }
// };
// int main(){
//     clg student;
//     student.setClg(266,"ritesh");
//     student.getClg();
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// // nested&resp
// class binary{
//     string s;
//     public:
//     void read_binary(void);
//     void check_binary(void);
//     void once_compliment(void);

// };
// void binary::read_binary(void){
//     cout<<"enter a binary : ";
//     cin>>s;

// }
// void binary::check_binary(void){
//     for(int i= 0; i<s.length(); i++){
//         if(s.at(i) !='0' && s.at(i)!='1'){
//             cout<<"Inncorect binary nuber "<<endl;
//            exit(0);

//         }
//     }
// }
// void binary::once_compliment(void){
//     for(int i=0; i<s.length(); i++){
//         if(s.at(i)=='0'){
//             s.at(i)='1';
//         }else{
//             s.at(i)='0';
//         }
//     }
// }
// int main(){
//     binary a;
//     a.read_binary();
//     a.check_binary();
//     a.once_compliment();
//     return 0;
// }

//------------->>>>> Object Memory Allocation & using Arrays in class

// #include<iostream>
// using namespace std;
//  class employee{
//     int Id;
//     char name[30];
//     public:
//     void getData(void);
//     void putData(void);
//  };
//  void employee::getData(void){
//     cout<<"enter Id : ";
//     cin>>Id;
//     cout<<"Enter  name : ";
//     cin>>name;
//  }
//  void employee::putData(void){
//     cout<<Id<<" ";
//     cout<<name<<" ";
//     cout<<endl;
//  }
//  int main(){
//     employee emp[30];
//     int n,i;
//     cout<<"enter number of employee : "<<endl;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         emp[i].getData();
//     }
//     cout<<"employee Data : "<<endl;
//     for(int i=0; i<n; i++){
//         emp[i].putData();
//     }

//     return 0;
//  }

// #include <iostream>
// using namespace std;
// class shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;
//     public :
//     void initcounter(void){counter =0;}
//     void setPrice(void);
//     void getPrice(void);
// };
// void shop::setPrice(){
//     cout<<"enter itemId : "<<counter+1<<endl;
//     cin>>itemId[counter];
//     cout<<"enter itemprice : "<<endl;
//     cin>>itemPrice[counter];
//     counter++;

// }
// void shop::getPrice(){
//     for(int i=0; i<counter; i++){
//         cout<<"price of item with id : "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
//     }
// }
// int main(){
//     shop dukkan;

//     dukkan.initcounter();
//      dukkan.setPrice();

//     dukkan.getPrice();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class employee {
//     int id;
//     static  int count;
//     public:
//     void setData(void){
//         cout<<"enter the id : ";
//         cin>>id;
//         count++;
//     }
//     void getData(void){
//         cout<<"the id of employee is "<<id<<" and number of employee "<<count<<endl;
//     }
//     static void getcount(void){
//         cout<<"enter the value of count "<<count<<endl;
//     }

// };
// int employee::count;
// int main(){
//     employee ritesh,pankaj,manish;
//     ritesh.setData();
//     ritesh.getData();
//     employee::getcount();

//     pankaj.setData();
//     pankaj.getData();
//     employee::getcount();

//     manish.setData();
//     manish.getData();
//     employee::getcount();
//     return 0;

// }

//  array of objrct

// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     int salary;
//     public:
//     void setId(void){
//         cout<<"enter the id : ";
//         cin>>id;
//     }
//     void getId(void){
//         cout<<"the id of imployee : "<<id<<endl;
//     }
// };

// int main(){
//     employee ritesh[4];
//     for(int i=0; i<4; i++){
//         ritesh[i].setId();
//         ritesh[i].getId();
//     }
//     return 0;
// }

// Complex number
// #include<iostream>
// using namespace std;

// class Complex{
//     int a,b;
//     public:
//     void complexNumber(int n1,int n2){
//         a=n1;
//         b=n2;
//     }
//     void complexbynubmer(Complex o1,Complex o2){
//         a= o1.a + o2.a;
//         b= o1.b + o2.b;

//     }
//     void NumberNumber(void){
//         cout<<"your Complex number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// int main(){
//       Complex c1,c2;
//       c1.complexNumber(12,32);
//       c1.NumberNumber();

//       c2.complexNumber(11,33);
//       c2.NumberNumber();

//       return 0;
// }

// friend function
// #include <iostream>
// using namespace std;
// class Complex
// {
//     int a, b;
//     friend Complex sumComplex(Complex o1, Complex o2);

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printNumber()
//     {
//         cout << "your comlex number is : " << a << " + " << b << "i" << endl;
//     }
// };
// Complex sumComplex(Complex o1, Complex o2)
// {
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b + o1.b));
//     return o3;
// }
// int main()
// {
//     Complex c1, c2, sum;
//     c1.setNumber(12, 23);
//     c1.printNumber();

//     c2.setNumber(11, 33);
//     c2.printNumber();

//     sum = sumComplex(c1, c2);
//     sum.printNumber();

//     return 0;
// }

// friend class
// #include<iostream>
// using namespace std;
// class Complex;
// class Calculator{
//     public:
//     int add(int a, int b){
//         return a+b;
//     } 
//     int sumRealComplex(Complex, Complex);
//     int sumComComplex(Complex,Complex);
  
// };
// class Complex{
//       int a,b;
//       friend class Calculator;
//       public:
//       void setNumber(int n1,int n2){
//         a = n1;
//         b = n2;
//       }
//       void printNumber(){
//         cout<<"your complex number is : "<<a<<" + "<<b<<"i"<<endl;
//       }
// };
// int Calculator::sumRealComplex(Complex o1, Complex o2){
//     return(o1.a + o2.a);
// }
// int Calculator::sumComComplex(Complex o1, Complex o2){
//     return(o1.b + o2.b);
// }

// int main(){
//     Complex o1,o2;
//     o1.setNumber(2,5);
//     o2.setNumber(3,4);
    
//     Calculator cal;
//     int res = cal.sumRealComplex(o1,o2);
//     cout<<"your complex number is "<<res<<endl;
//     res= cal.sumComComplex(o1,o2);
//     cout<<"your complex number is "<<res<<endl;
//     return 0; 

// }


// #include<iostream>
// #include<string>
// using namespace std;
// //copy constructor

// class Student{
//     string name;
//     int rno ;
//     float fee;
//     public:
   
//     Student(string n,int r,float f){
//         name = n;
//         rno = r;
//         fee = f;   
//     }
//     Student(Student &s){
//           cout<<"copy constructor "<<endl;
//         name=s.name;
//         rno=s.rno;
//         fee=s.fee;
//     }
//     void display(){
//         cout<<" name : "<<name
//         <<"\n rno "<<rno
//         <<"\n fee "<<fee<<endl;
//     }
// };
// int main(){
//     Student s("ritesh", 266,1500000) ;
//     s.display();
  
//     Student s1(s);
//     s1.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//       for(int j=1;j<=i;j++){
//         cout<<"*";
//       }
//       cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"ente a number a,b and c : "<<endl;
  cin>>a>>b>>c;
  if(0<a&& a<10 || 0<b&&b<10 || 0<c&&c<10){
    if(a==b&& b==c&& c==a){
     cout<<"eqaleteral trangle ";
    }else if(a==b && b!=c|| a!=b && c==a){
     cout<<"issoscales trangle";

    }else{
     cout<<"isoles trangle";
    }
  }else{
     cout<<"invalid";
  }
  return 0;
}

