#include <iostream>

using namespace std ;




int main()
{
   cout <<"Enter your number \t" ;
   int n , count ;
   cin>>n ;
   count = 0 ;
   for (int i = 0; i < n; i++)
   {
    count += 1 ;
    cout<<"the count of n\t"<<" \t"<<n <<"\n"<<count<<endl ;
   }
   

    system("pause") ;
    return 0 ;
}