#include<iostream>
using namespace std;
//Increase reusability
    // Don't Repeat yourself
    /*
    Two types of functions:-
    1. User defined functions.
    2. Standard library functions
    */

   // Access global variable using scope resolution operator i.e. ::
int add(int, int);   // This is called function prototype. We cannot declare any function after main function, but if we want to do this the only way is by building function prototype first.Then only after we declare any function after main function.

int value(int &a, int &b){
   a = 100;                // Call by reference functions
   b = 300;
}

int square(int x){
  
      int res = x*x;
      return res;
   }

double circumference(int r){
   return 2*3.14*r;
}

double area(int r){
   return 3.14*r*r;
}

int checkingAge(int a){
   if(a>18){
      cout<<"Person is elgible for vote!";
   }
   else{
      cout<<"Person is not eligible for vote!";
   }
}

bool isOdd(int x){
   if(x%2==0){
      return false;
   }
   else{
      return true;
   }
}

bool isPrime(int n){
   if(n<=1){
      return false;
   }
   for(int i=2; i<=n-1; i++){
      if(n%i==0){
         return false;
      }
      return true;
   }
}
int main(){


   int res =  add(4,5);
   cout<<res<<endl;
   int a = 500;
   int b = 600;
   cout<<value(a,b)<<endl;

   // Printing square root of first five natural numbers.
  for(int i=0; i<=5; i++){
   cout<<square(i)<<endl;
  }

  // Printing area of circle and cirumference.

  int radius;
  cin>>radius;
  cout<<"Value of radius is :- "<<radius<<endl;

  cout<<circumference(radius)<<endl;
  cout<<area(radius)<<endl;


// Checking whether the person is eligible for vote or not

int age;
cin>>age;
cout<<"Age of person is :- "<<age<<endl;
checkingAge(age);
  
  // Printing odd number according to user

int num1;
cin>>num1;
cout<<"Number range is :-"<<num1<<endl;
for(int i = 0; i<num1; i++){
   if(isOdd(i)){
      cout<<i<<" "<<endl;
   }
}

int val;
cin>>val;
cout<<"value between you find prime number is:- "<<val;
for(int i = 2; i<=val; i++){
   if(isPrime(i)){
      cout<<i<<" "<<endl;
   }
}

    
}
int add(int a,int b){
int sum = a +b;
return sum;
}