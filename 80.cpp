#include <iostream>


using namespace std ;

int main(){

short int  x1 , y1, x , y ,swap ;
cout<<"Enter the first number x\n";
cin >>x ;
cout<<"Enter the second number y\n";
cin >>y ;

x1 = x ;
cout<<"the first number of x is x1\n" ;
cout<<"x1 ="<<x<<endl ;
y1 = y ;
cout<<"the first number of y is y1\n" ;
cout<<"y1 ="<<y<<endl ;

   swap = x1 ;
   x1 = y1 ;
   y1= swap   ;

cout<<"\n \n \n" ;
cout<<"the first number of x is x1\n" ;
cout<<"x1 ="<<x1<<endl ;

cout<<"the first number of y is y1\n" ;
cout<<"y1 ="<<y1<<endl ;




system("pause") ;
    return 0 ;
}