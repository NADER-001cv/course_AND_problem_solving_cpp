#include <iostream>

using namespace std ;






int main(){


int  i , n ,fac ;
  fac = 1 ;
i = 1 ;
cout<<"Enter the number \n";
     cin>>n ;
while ((n <= 0 ))
{
    
    cout<<"Enter the number \n";
    break;
}
while ((n > 0 ) && ( n >= i))
{
    
    fac = i * fac  ;
     i++ ;
}

cout<<"The factorial of n is:"<<n<<"\t"<<fac<<endl ;
// for (int j = 1; j <= n; j++)
// {
// fac= fac * j ;

// }







               system("pause")       ;
    return 0 ;
}