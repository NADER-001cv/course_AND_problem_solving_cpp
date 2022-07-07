#include <iostream>

using namespace std ;

int main()
{

      for (int i = 1; i <= 5; i++)
      {
        for (int  j = 0; j < 5 - i ; j++)
        {
           cout<<" " ;
        }
        for (int  j = 0; j < 2*i -  1; j++)
        {
           cout<<"*" ;
        }  
        
        cout<<endl ;
      }
      

// i = 0  j =     * ---------> 2 * i + 1
// i = 1   j =   *** ---------->  2 * i + 1
//i = 2   j  =  ***** ---------->  2 * i + 1
// i =3   j=   ******* ----------> 2 * i  + 1
// i =4    j= ********* ----------> 2 * i + 1

    system("pause")  ;
    return 0 ;
}