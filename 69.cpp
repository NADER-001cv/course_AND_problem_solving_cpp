#include <iostream>

using namespace std ;




int main()
{
   cout <<"Enter your number \t" ;
   int n , sum ;
   cin>>n ;
   sum = 0 ;
   for (int i = 1; i <= n; i++)
   {
     if (i % 2 != 0)
     {
        sum += i ;
     }
     
   }
   
   cout<<"the sum is \t"<<sum<<endl  ;

    system("pause") ;
    return 0 ;
}