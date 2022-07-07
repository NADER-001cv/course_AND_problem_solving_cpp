#include <iostream>

using namespace std ;

int main(){

  
    int  number_of_hours ,days,weeks ;


 cout<<"Enter the number of hours\t";
        cin>>number_of_hours ;
       if( number_of_hours> 0)
       {
       
           days= number_of_hours / 24 ;
         weeks = days/7 ;

       }
       
     
       cout<<"the number of days \n"<<days ;
       cout<<"\nthe number of week \n"<<weeks<<endl ;




          system("pause")  ;

    return 0 ;
 }