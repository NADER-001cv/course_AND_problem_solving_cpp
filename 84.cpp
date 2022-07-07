#include <iostream> 


using namespace std ;

int main(){




/*

       *
      **
     *** 
    ****
   *****
  ******  
i =0     j =1
i =1      j=2
i= 2           j=3
i =5   j = 5
*/


for (int i = 0; i <= 5; i++)
{
    for (int  j = 0; j <= 5-i ; j++)
    {
        cout<<" " ;
    }
    
  for (int k = 0; k  <= i; k ++)
  {
     cout<<"*" ;
  }
  
 cout<<"\n" ;
}






           system("pause")   ;
    return 0 ;
}


