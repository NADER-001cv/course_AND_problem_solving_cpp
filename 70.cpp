#include <iostream>
using namespace std ;

int main(){


int sum , counter , n ;

cout<<"Enter your number n \t :" ;
cin>>n ;
cout<<"\n" ;
sum = 0 ;
counter = 0 ;
for (int i = 1 ; i <= n; i++)
{  

    counter += 1 ;
    if (i % 2 == 0)
    {
        sum += counter ; 
    }
    
}

cout<<"the sum is \t"<<sum<<endl ;


system("pause") ;
    return 0 ;
}