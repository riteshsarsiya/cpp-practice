// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello ";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class employe
// {
//      private :
//      int a,b,c;
//      public :
//      int d,e;
//     void setData(int a1,int b1,int c1);
//     void getData(){
//         cout<<"The value of a :"<<a<<endl;
//         cout<<"The value of b :"<<b<<endl;
//         cout<<"The value of c :"<<c<<endl;
//         cout<<"The value of d :"<<d<<endl;
//         cout<<"The value of e :"<<e<<endl;

//     }
// };

// void employe :: setData(int a1,int b1,int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }
// int main(){
//    employe ritesh;
//    ritesh.d=44;
//    ritesh.e=33;
//   ritesh.setData(22,45,34);
//   ritesh.getData();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class room{
//     public :
//     double lenght;
//     double breath;
//     double height;
//     double calculate_area(){
//         return (lenght*breath);
//     }
//     double calculate_lenght(){
//         return (lenght*breath*height);
//     }
// };
// int main(){
//     room rm1;
//     rm1.breath=23.5;
//     rm1.lenght=44.6;
//     rm1.height=19.4;
//     cout<<"area of room : "<<rm1.calculate_area()<<endl;
//     cout<<"length of room : "<<rm1.calculate_lenght()<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class student{
//     private :
//    int  roll_number;
//    string student_name;
//    public:
//    void setData(int roll, string name){
//    roll_number = roll;
//    student_name = name;

//    }
//    void getData(){
//     cout<<" roll number : "<<roll_number<<endl;
//     cout<<" student names : "<<student_name<<endl;
//    }

// };
// int main(){
//     student a;
//     a.setData(266,"ritesh");
//     a.getData();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class area{
//     public :
//     float r;
//     float r1;
//    void setArea(float redius, float pai);
//    void getArea(){

//     cout<<"area of radius : "<<r1*(r*r);

//    }
// };
//    void area :: setArea(float redius, float pai){
//     r=redius;
//     r1=pai;
//    }
//    int main(){
//     area Areai;

//   Areai.setArea(4,3.14);
//    Areai.getArea();
//    return 0;

//    }

// parameter

// #include<iostream>
// using namespace std;
// class parameter
// {
//     public :
//     int a,b;
//     void setPara(int p1,int p2);
//     void getPara(){
//         cout<<"the parameter : "<<a+b;
//     }

// };

// void parameter :: setPara(int p1,int p2){
//     a=p1;
//     b=p2;
// }
// int main(){
//     parameter para;
//     para.setPara(2,3);
//     para.getPara();
//     return 0;
// }

// OOPs Recap & Nesting of Member Functions in C++ | C++ Tutorials for Beginners #22

// #include<iostream>
// #include<string>
// using namespace std;

// class binary{
//     string s;
//     public :
//     void read(void);
//     void chk_bin(void);

// };
// void binary :: read(void){
//     cout<<"enter aa binary nuber : ";
//     cin>>s;

// }
// void binary :: chk_bin(void){
//     for(int i=0; i<s.length(); i++){
//         if(s.at(i) != '0' && s.at(i)!='1'){
//             cout<<"Inncorret Binary number "<<endl;
//             exit(0);
//         }
//     }
// }
// int main(){
//     binary b;

//     b.read();
//     b.chk_bin();
//     return 0;
// }

// nested
// #include<iostream>
// #include<string>
// using namespace std;

// class binary{
//     string s;
//     public :
//     void read(void);
//     void chk_bin(void);
//     void once_comliment(void);
//     void display(void);

// };
// void binary :: read(void){
//     cout<<"enter aa binary nuber : ";
//     cin>>s;

// }
// void binary :: chk_bin(void){
//     for(int i=0; i<s.length(); i++){
//         if(s.at(i) != '0' && s.at(i)!='1'){
//             cout<<"Inncorret Binary number "<<endl;
//             exit(0);
//         }
//     }
// }
// void binary :: once_comliment(void){
//     for(int i=0; i<s.length(); i++){
//         if(s.at(i)=='0'){
//             s.at(i)='1';
//         }
//         else{
//             s.at(i)='0';
//         }
//     }
// }
// void binary ::display(void){
//     cout<<"Displaying your binary number "<<endl;
//     for(int i=0; i<s.length(); i++){
//         cout<<s.at(i);
//     }
//     cout<<endl;

// }
// int main(){
//     binary b;

//     b.read();
//     b.chk_bin();
//     b.display();
//     b.once_comliment();
//     b.display();
//     return 0;
// }


//------------->>>>> Object Memory Allocation & using Arrays in class 
// #include <iostream>
// using namespace std;
// class shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

//     public:
//         void initcounter(void){ counter =0;}
//         void setPrice(void);
//         void displayPrice(void);

// };

// void shop::setPrice(void){
//     cout<<"enter id of item no : "<<counter +1<<endl;
//     cin>>itemId[counter];
//     cout<<"enter price of your item : "<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }

// void shop::displayPrice(void){
//     for(int i=0; i<counter;i++)
//     {
//         cout<<"The price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
//     }
// }
// int main(){
//     shop dukaan;
//     dukaan.initcounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();
//     return 0;

// }



//------->>>Static Data Members & Mthods in #24


// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     static int count;
   
//     public:
//     void setData(void){
//         cout<<"enter the id : ";
//         cin>>id;
//         count ++;
//     }
//         void getData(void){
//             cout<<"The id of this employee is "<<id<<" and this employee nubmer "<<count<<endl;
//         }
    
// };
// int employee::count; //default value is 0
// int main(){
//     employee ritesh,ayush,pankaj;
//     ritesh.setData();
//     ritesh.getData();

//     ayush.setData();
//     ayush.getData();
    
//     pankaj.setData();
//     pankaj.getData();
//     return 0;
// }



// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     static int count;
//    //static finction
//     public:
//     void setData(void){
//         cout<<"enter the id : ";
//         cin>>id;
//         count ++;
//     }
//         void getData(void){
//             cout<<"The id of this employee is "<<id<<" and this employee nubmer "<<count<<endl;
//         }
//         static void getcount(void){
//             cout<<"enter the value of count : "<<count<<endl;
//         }
    
// };
// int employee::count; //default value is 0
// int main(){
//     employee ritesh,ayush,pankaj;
//     ritesh.setData();
//     ritesh.getData();
//     employee::getcount();

//     ayush.setData();
//     ayush.getData();
//     employee::getcount();
    
//     pankaj.setData();
//     pankaj.getData();
//     employee::getcount();
//     return 0;
// }


// Array of Objects & Passing Objects as Function Arguments in C++ | C++ Tutorials for Beginners #25

// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     int salary;
//     public:
//     void setData(void){
//         cout<<"enter the id is : ";
//         cin>>id;
//     }
//     void getData(void){
//         cout<<"the id of employee is  "<<id<<endl;
//     }
// };
// int main(){
//     employee fb[4];
//     for(int i=0; i<4;i++){
//         fb[i].setData();
//         fb[i].getData();
//     }
    
//     return 0;
// }


// comlpex number #25

// #include<iostream>
// using namespace std;
// class Complex{
//     int a;
//     int b;
//     public:
//     void setData(int v1,int v2){
//         a=v1;
//         b=v2;
// }
//     void setDataBySum(Complex o1, Complex o2){
//         a= o1.a + o2.a;
//         b= o1.b + o2.b;
//     }
//     void printNumber(){
//         cout<<"your Complex number is "<<a<<" + "<<b<<"i"<<endl;
//     }

// };
// int main(){
//     Complex c1,c2,c3;
//     c1.setData(22,34);
//     c1.printNumber();

//     c2.setData(23,33);
//     c2.printNumber();

//     c3.setData(33,23);
//     c3.printNumber();
//     return 0;
// }


// Friend Functions in C++ | C++ Tutorials for Beginners #26

// #include<iostream>
// using namespace std;
// class Complex{
//     int a;
//     int b;
//     friend Complex sumComplex(Complex o1 , Complex o2);
//     public:
//   // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
//     void setNumber(int v1,int v2){
//         a = v1;
//         b = v2;
//     }
//     void printNumber(){
//         cout<<"your Complex nuber is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// Complex sumComplex(Complex o1 ,Complex o2){
//     Complex o3;
//     o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
//     return o3;

// }
// int main(){
//     Complex c1,c2,sum;
//     c1.setNumber(4,3);
//     c1.printNumber();

//     c2.setNumber(2,4);
//     c2.printNumber();

//    sum = sumComplex(c1,c2);
//    sum.printNumber();

//     return 0;
    /* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
// }


 // Friend Classes & Member Friend Functions in C++ | C++ Tutorials for Beginners #27

// #include<iostream>
// using namespace std;
//  // forward declarasion
// class Complex;

// class Calculator{
//     public:
//     int add(int a, int b){
//     return (a+b);
    
//     }
//     int sumRealComplex(Complex ,Complex);
//     int sumComComplex(Complex,Complex);
    
// };

// class Complex{
//     int a , b;
//     friend int Calculator::sumRealComplex(Complex  ,Complex );
//     friend int Calculator:: sumComComplex(Complex,Complex);
// //    friend class Calculator;
//     public :
//     void SetNumber(int n1,int n2){
//         a=n1;
//         b=n2;
//     }
//     void printNumber(){
//         cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;

//     }
    

// };

// int  Calculator::sumRealComplex(Complex o1, Complex o2){
//     return (o1.a + o2.a);
   
// }
// int Calculator:: sumComComplex(Complex o1,Complex o2){
//     return(o1.b+o2.b);
// }
// int main(){
//     Complex o1,o2;
//     o1.SetNumber(2,4);
//     o2.SetNumber(3,5);

//     Calculator cal;
//     int res = cal.sumRealComplex(o1,o2 );
//     cout<<" the sum of real part of o1 and o2 : "<<res<<endl;
//     res=cal.sumComComplex(o1,o2);
//     cout<<"the sum of real part of o1 and o2 : "<<res<<endl;
//     return 0;

// }


// More on C++ Friend Functions (Examples & Explanation) | C++ Tutorials for Beginners #28


// #include<iostream>
// using namespace std;
// class y;
// class x{
//     int data;
//     public:
//     void valueData(int value){
//         data = value ;
//     }
//     friend void add(x , y ); 
// };
// class y{
//     int sum;
//     public:
//     void valueData(int value){
//         sum= value;
//     }
//     friend void add(x , y);
// };
// void add(x o1, y o2){
//     cout<<"sum of number is : "<<o1.data+o2.sum;
// }
// int main(){
//     x a1;
//     a1.valueData(12);

//     y b1;
//     b1.valueData(11);
//     add(a1,b1);

//     return 0;
// }


// #include<iostream>
// using namespace std;
// // forword declation
// class c2;
// class c1{
//  int val1;
//  friend void exchang(c1 &,c2 &);
//  public:
//  void intData(int a){
//     val1 = a;
// }
//     void Display(){
//         cout<<val1<<endl;
//     }
// };

// class c2{
//     int val2;
//     friend void exchang(c1 &,c2 &);
//     public :
//     void intData(int a){
//         val2 = a;
//     }
//     void Display(){
//         cout<<val2<<endl;
//     }
// };

// void exchang(c1 & x, c2 & y){
//    int tmp = x.val1;
//     x.val1=y.val2;
//     y.val2= tmp;
// }
// int main(){
//     c1 a1;
//         c2 b2;
//     a1.intData(23);
//     b2.intData(33);
//     exchang(a1,b2);
    
//     cout<<"The value of c1 after exchanging becomes: :";
//     a1.Display();
//     cout<<"The value of c2 after exchanging becomes: :";
//     b2.Display();

//     return 0;

// }

