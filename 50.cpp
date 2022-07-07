#include <iostream> 

#include <cmath>

using namespace std ;

int fib(int n)
{
    if (n <2)
    {
            return n ;
    }
    else 
    {
        return fib(n - 1) + fib(n - 2) ;
    }
    
}
int main()
{

    int n ;
     cout<<"Enter the number n is : \t";
     cin>>n ;
     cout<<fib(n)<<endl ;
      system("pause")  ;
    return 0 ;

}