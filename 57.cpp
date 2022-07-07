#include <iostream>

using namespace std ;

int main(){

    for (int j = 0; j <= 10; j++)
    {
        for (int i = 1; i < j + 1; i++)
            {
                
                cout<<"*" ;
               
            }
             cout<<"\n" ;
  }
   
   // j = 0   i = *
   //j = 1    i = **
  // j =2  i = ***
   
    cout<<"\n" ;
    

 

    system("pause") ;
    return 0 ;
}