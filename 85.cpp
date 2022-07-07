#include <iostream>

using namespace std ;

int main(){

bool A=0 , B=1 ,result  ;





cout<<(A && B)<<endl ;
cout<<(A || B)<<endl ;
cout<<(!A)<<endl ;
cout<<(!B)<<endl ;
cout<<!(A && B)<<endl ;
cout<<!(A || B)<<endl ;
result =  !(5 >6 || 7==7 ) &&  !(1||0) ;
cout<<"the resulte is = "<<result <<endl ;



        system("pause")       ;
    return 0 ;
}