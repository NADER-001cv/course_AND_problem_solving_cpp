#include <iostream>

using  namespace std ;

int main()
{
    double  number ;
   
    double sum =0;
     cout<<"Enter the number\n" ;
  cin>>number ;

     while (number >= 0 )
     {
   
         sum += number ;
        cout<<"Enter the number\n" ;
  cin>>number ;
     }
     cout<<"\t The sum is "<<sum<<endl ;
     
     system("pause") ;

     return 0 ;
}