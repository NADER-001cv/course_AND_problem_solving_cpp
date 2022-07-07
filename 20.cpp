#include <iostream>
using namespace std ;


int main(){

    int  a = 10 ;
    int b = 12 ;
    int c = 20 ;


    cout<<(a >b && a == b)<<endl ;
    cout<<(a > b ||  c >  b)<<endl ;
    cout<<!(a >b && a == b)<<endl ;


    system("pause") ;

    return 0 ;
}