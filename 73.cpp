#include <iostream>

using namespace std ;






int main(){

 int sum , num   ;

 

 
  sum = 0 ;
 while (num != -99)
 {
    
     cout<<"Enter your number \t" ;
 cin>>num ;
 if (num == -99)
 {
    break;
 }
 
    sum += num ;
    
    
 }
   cout<<"the sum is "<<sum<<endl ;


 





           system("pause") ;
    return 0 ;
}