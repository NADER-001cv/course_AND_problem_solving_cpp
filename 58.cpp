#include <iostream>

using namespace std ;

int main()
{

      for (int i = 5; i >= 0; i--)
      {
        for (int  j = 0; j < i; j++)
        {
           cout<<"*" ;
        }
        
        cout<<endl ;
      }
      

// i = 0   j =  ******
// i = 1    j = *****
//i = 2     j = ****
// i =3     j = ***
// i =4    j=   **
// i = 5  j=    *
    system("pause")  ;
    return 0 ;
}