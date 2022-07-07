#include <iostream>

using namespace std ;

int main()
{

      for (int i = 0; i <= 5; i++)
      {
        for (int  j = 1; j < 2*i + 1; j++)
        {
           cout<<"*" ;
        }
        
        cout<<endl ;
      }
      

// i = 0  j =  ** ---------> 2 * i + 2
// i = 1   j = ****  ---------->  2 * i + 2 
//i = 2     j = ****** ---------->  2 * i + 2
// i =3     j = ******** ----------> 2 * i  + 2
// i =4    j=   ********** ----------> 2 * i + 2

    system("pause")  ;
    return 0 ;
}