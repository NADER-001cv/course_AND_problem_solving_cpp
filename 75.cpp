#include <iostream>

using namespace std ;

int main(){

  
    int  number_of_seconds ,days, hours,seconds ,minutes;


 cout<<"Enter the number of hours\t";
        cin>>number_of_seconds ;
       if( number_of_seconds> 0)
       {
       
         hours  =  number_of_seconds / (60 ) ;
minutes = hours / 60 ;
seconds = minutes / 60 ;
          days = hours * 24 ;


       }
       
     
       cout<<"the format of time \n"<<days<<":"<<hours<<":"<<minutes<<":"<<seconds<<endl;
      // d:h:m:s cout<<"\nthe number of week \n"<<weeks<<endl ;




          system("pause")  ;

    return 0 ;
 }