#include <iostream>
#include <cmath>


using namespace std;


int main()
{

    long  sum,n ;
    cout<<"enter the number n :\t";
    cin>>n ;
    sum = n *( n + 1 )/2 ;
  /*  for (int i = 1; i <= n; i++)
    {
       // sum +=i ;
    } */
     cout<<"the result of sum is \t"<<sum<<endl ;

     system("pause") ;
    return 0 ;
}