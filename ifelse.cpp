// #include<iostream>
// using namespace std ;
// int main(){
//      int age ;
//      cout<<"enter ur age"<<endl;
//      cin>>age;
//      if(age>=18){
//         cout<<"u not kid "<<endl;
//      }
//      else{
//         cout<<"also kid"<<endl;
//      }
//      return 0;
// }



// // print positive number by user
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter a number  : ";
//     cin>>num;

//     if(num>0){
//         cout<<"number is positive : "<<endl;
//     }
//     else{
//         cout<<"number is negative :"<<endl;
//     }
//     return 0;
// }


// check positive and negative or zero
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter number :";
//     cin>>num;

//     if(num>0){
//         cout<<"it positive num : "<<endl;

//     }else if(num<0){
//         cout<<"its negative number : "<<endl;

//     }else{
//         cout<< " its only zero : "<<endl;
//     }
//     return 0;

// }



//   NESTED 

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter number : ";
//     cin>>num;
//     if(num >=0){
//       cout<<"num is positive : "<<endl;
//       if(num%2==0){
//         cout<<"even:"<<endl;
//       }else{
//         cout<<"odd"<<endl;
//       }

//     }else{
//         cout<<"negative :"<<endl;
//     }
// return 0;
// }



// SWITCH STATEMENT 
// calculater 
// #include<iostream>
// using namespace std;
// int main() {
//     char oper ;
//     float a,b;
//     cout<<"enter a opertator ";
//     cin>>oper;
//     cout<<"enter a two number : "<<endl;
//     cin>>a>>b;

//     switch (oper){
//         case('+'):
//               cout<<a+b<<endl;
//               break;
    
//         case('-'):
//               cout<<a-b<<endl;
//               break;
//         case('*'):
//               cout<<a*b<<endl;
//               break;
//         case('/'):
//               cout<<a/b<<endl;
//               break;  
//         default:
//                cout<<"error! the operator is incorrect "<<endl;
//                 break;               


//     }
//     return 0;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     char day;
//     cout<<"enter a num :";
//     cin>>day;
//      switch(day){
//         case('1'):cout<<"monday"<<endl;
//         break;
//         case('2'):cout<<"tuesday"<<endl;
//         break;
//         case('3'):cout<<"wednesday"<<endl;
//         break;
//         case('4'):cout<<"thursday"<<endl;
//         break;
//         case('5'):cout<<"friday"<<endl;
//         break;
//         case('6'):cout<<"saturday"<<endl;
//         break;
//         case('7'):cout<<"sunday"<<endl;
//         break;
//         default: cout<<"not walid day";
//         break;


//      }
//       return 0;
// }

    // FOR LOOP


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5; i++){
//         cout<<i;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5; i++){
//         cout<<"Hello World"<<endl;
//     }
//     return 0;
// }

// find the sum of n natural number

// #include<iostream>
// using namespace std;
// int main(){
//     int num,sum;
//     sum=0;
//     cout<<"enter a number :";
//     cin>>num;

//     for(int i=1; i<=num; i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

       //>>>>>WHILE 

//  #include<iostream>
//  using namespace std;
//  int main(){
//     int i=1;
//     while( i<=5){
//         cout<<"Hellow World"<<endl;
//         i++;
      
//     }
//       return 0;
//  }       


//   print a number form 0 to n, if n is give by user n=4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;

//     int i=0;
//     while(i<=n){
//         cout<<i<<endl;;
//         i++;
//     }
//     return 0;
// }


//  >>> Do While

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     do{
//         cout<<"Hello World"<<endl;
//         i++;
//     }while(i<=5);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int i=5;
// do{
//     cout<<i<<endl;
//     i--;

// }while(i>=1);
// return 0;
// }


// print the sum of first n natural number n=4 Also,print them in reverse 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;

//     int sum =0;
//     for(int i=1,j=n; i<=n&j>=1;i++,j--){
//         sum+=i;
//     }
//     cout<<sum;
//     return 0;
// }

 //print the table of a number input by the user n=2

//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     for(int i=1; i<=10; i++){
//         cout<<n*i<<endl;
//     }
//     return 0;
//  }


/// <<<< BREAK STATEMENT  
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         if(i==3){
//             break;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

 // keep taking number as input from user retail user enter an odd number 
// #include<iostream>
//  using namespace std;
// int main(){
//     int n;
   

//     for(int i=1;i<=n;i++){
//       cout<<"enter a number :";
//     cin>>n;
  
        

//         if(n%2 !=0){
//             cout<<n<<"is odd"<<endl;
//             break;
//         }else{
//             cout<<n<<"not odd"<<endl;
//         }
        
//     }
//     return 0;
// }

// #include<iostream>
//  using namespace std;
// int main(){
//     int n;
//     do{
//     cout<<"enter a number :";
//     cin>>n;
     
//      if(n%2 !=0){
//         cout<<n<<"odd number "<<endl;
//         break;
//      }else{
//         cout<<n<<"not odd "<<endl;
//      }
// }while(1);
//     return 0;
// }

// keep taking number as input from user until user enter a number which is multiple of 7
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
    
//     do{
//          cout<<"enter numbr ";
//     cin>>n;
        
//         if(n%7 ==0){
//             cout<<n<<"is multiple of 7"<<endl;
//             break;
//         }else{
//             cout<<n<<"is not multiple of 7" <<endl;
//         }

//     }while(1);
//     return 0;
// }


// >>>>>>>>> CONTINUE 

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         if(i==3){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// >>> print all nmber from 1 to 10 except for 6;

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         if(i==6){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

//  print all the odd number from 5 to 50

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5; i<=50; i++){
//         if(i%2 !=0){
//         cout<<i<<endl;
//     }
//     }
//     return 0;
// }




// print the factorial of all number n
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     int fact = 1;
//     for(int i=1; i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<"final factoreal is "<<fact<<endl;
//     return 0;
// }


// print reverse of the table for a number 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter numer :";
//     cin>>n;
//     for(int i=10 ; i>=1; i--){
//         cout<<n*i<<endl;
//     }
//     return 0;
// }

//calculate the sum of all number b/w 5 and 50 (iincludeing 5&50)
// #include<iostream>
// using namespace std;
// int main(){
//     int sum =0;
//     for(int i=5; i<=50; i++){
//     sum+=i;
//     }
//     cout<<sum<<endl;
    
//     return 0;
// }


//search on what a "nested loop" is & print this pattern using it 
// #include<iostream>
// using namespace std; 
// int main(){
//     int row =4;
//     for(int i=1; i<=4;i++){
//         for(int j=1; j<=4; j++){
//             cout<<"*";
//         }
//         cout<<"*"<<endl;
//     }
//     return 0;
// }



//>>>>>>>>>>>>>>>PRECTICE
//Write a program in C++ to display n terms of natural numbers and their sum.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n; i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }


//write a program in c++ to find the perfect between 1 to500 . the perfect no b/w 1to 500

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1, u=1, sum=0;
    
//     while(i<=500)
//     {
//       while(u<=500)
//       {
//         if(u<i)
//         {
//             if(i%u==0)
//                 sum+=u;
//             }
//             u++;
//         }
//         if(sum ==i){
//             cout<<i<<endl;
//         }
//         i++;
//         u=1;
//         sum=0;
//       } 
//       return 0; 
//     }


// write a programin c++ to check whether the number is prime or not

// #include<iostream>
// using namespace std;
// int main(){
//     int n, sum =0;
//     cout<<"check whether the number is prime or not : ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             sum++;

//         }
//     }
//     if(sum==2){
//         cout<<"it a prime number :"<<endl;
//     }else{
//         cout<<"not prime no :"<<endl;
//     }
//     return 0;
// }


//write a program in c++ to find a prime number whithin range

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n1,n2;
//     int frd=0, ctr=0;
//     cout<<"starting range : ";
//     cin>>n1;
//     cout<<"ending range :";
//     cin>>n2;
//     for(int i=n1; i<=n2; i++){
//         for(int j=2; j<=sqrt(i); j++){
//             if(i% j==0)
//             ctr++;

//         }
//         if(ctr==0 && i!=1){
//             frd++;
//             cout<<i<<endl;
//         }
//         ctr=0;
//     }
//     cout<<"the total number of prime b/w :"<<n1<<" to "<<n2<<" is :"<<frd<<endl;
//     return 0;
// }

// write a program in c++ to find the fectoral of a nuber 

// #include<iostream>
// using namespace std;
// int main(){
//     int n , fact=1;

//     cout<<"enter a number :";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         fact*=n;
//     }
//     cout<<"the factoreal given number is :"<<fact<<endl;
//     return 0;

// }


//write a program in c++ to find a last prime number that occure before the entered  nuber 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,ctr=0; 
//     cout<<"enter a number : " ;
//     cin>>n;
//     for(int i= n-1;i>=1;i--){
//         for(int j=2;j<i;j++){
//             if(i%j==0)
//             ctr++;
//         }
//         if(ctr==0){
//             if(n==1){
//                 cout<<"no prime number less than 2";
//                 break;
//             }
//             cout<<i<<" the last prime nuber before "<<n<<endl;
//             break;
//         }
//         ctr=0;
//     }
//     return 0;

// }


 



