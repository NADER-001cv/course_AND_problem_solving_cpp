#include <iostream>
#include <stdlib.h>
#include <ctime> 
#include <cmath>


using  namespace std ;

int main(){


int x = 2 ;
int y = 3 ;
int temp ;
cout<<"the number x is \t"<<x<<endl;
cout<<"the number y is \t"<<y<<endl ;
cout<<"#################\n" ;
temp = x ;
x = y ;
y = temp ;
cout<<"the number x is \t"<<x<<endl;
cout<<"the number y is \t"<<y<<endl ;
    

  system("pause")  ;
return  0 ;
}

