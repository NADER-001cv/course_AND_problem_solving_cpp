#include <iostream>

using namespace std ;

double sum(double x,double y)
{

    return x + y ;
}

void print(int a,int b)
{
    cout<<" a + b =\t"<<a + b <<endl ;
}
int main(){
   


    cout<<sum(40,20)<<endl ;
print(22,25) ;
    system("pause") ;
    return 0 ;
}