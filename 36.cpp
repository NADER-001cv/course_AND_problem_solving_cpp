#include <iostream>
#include <stdlib.h>
#include <ctime> 
#include <cmath>


using  namespace std ;


int fun(int n);
int fact(int n);
int fun2(int n)
{
    if (n == 0)
    {
        return 1 ;
    }else
    {
        return  7 + fun2(n-2) ;
    }
    //step one n = 4 fun(4)
    // return 7 + fun(2)
    //step two n = 2
    // return 7 + fun(0)
    //step three n = 0
    // return  1
  
    // fun(0)  = 1
    // fun(2) = 8
    //fun(4) = 15
   
}

int main(){

int n= 4 ;
int m = 4 ;
int l = 4 ;
int k = 5 ;
cout<<fun(n)<<endl ;
cout<<"###################\n" ;
cout<<fun2(m)<<endl ;
cout<<"###################\n" ;
cout<<fact(l)<<endl ;
cout<<"###################\n" ;
cout<<fact(k)<<endl ;



  system("pause")  ;
return  0 ;

}

int fun(int n)

{
    if (n == 0)
    {
        return 1 ;
    }else
    {
        return  1 + fun(n-1) ;
    }
    //step one n = 4 
    // return 1 + fun(3)
    //step two n = 3
    // return 1 + fun(2)
    //step three n = 2
    // return 1 + fun(1)
    //step four n = 1
    // return 1 + fun(1)
    // step five n = 1
    // return 1 + fun(0) --------3
    // step six  n = 0
    //return 1 + fun(0)  ------- 2
    //step seven n = 0
    // fun(0)  = 1
    // fun(1) = 2
    //fun(2) = 3
    //fun(3) = 4
    // fun(4) = 5 
}


int fact(int n)
{

    if (n == 1)
    {
            return 1 ;
    }
    else
    {
      return n * fact(n - 1) ;
    }
    
}