#include <iostream>

using namespace std ;

int main(){

    int num ;
    cout<<"Enter the number \n" ;
     cin>>num ;
     cout<<"\n" ;

   if(num != 0)
      {

            if (num % 2 == 0)
     {
         cout<<num<<"\t this is number is even  \n" ;
     }else
     {
         cout<<num<<"\t the number isn \'t odd  \n" ;
     }
      }
      else {
 cout<<num<<"the number isn \'t not even not odd   \n" ;
      }
     
     system("pause") ;
     return 0 ;
}