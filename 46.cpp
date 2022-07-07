#include <iostream>

#include <cmath>



using namespace std ;



int main()
{

int a ,b ;
cout<<"Enter two  number \t \n" ;
cin>>a>>b ;
if ( (a % b) == 0 || (b % a) == 0)
{
    cout<<"Multiply ok\n" ;
}
else
{
    cout<<" No Multiply ok\n" ;
}


              system("pause")    ;
    return 0 ;
}