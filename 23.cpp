#include <iostream>
#include <cmath>
using namespace std ;

int main(){

    double a ;
    double b ;
    double c ;
    double x1 , x2,delta ,rdelta ;

    cout<<"enter the number a \n" ;
    cin>>a ;
    cout<<"enter the number b \n" ;
    cin>>b ;
    cout<<"enter the number c \n" ;
    cin>>c ;

     delta = (b * b - 4 *a *c);
     cout<<"the result of delta is \n" ;
     cout<<delta<<endl ;
       cout<<"the result of Rdelta is \n" ;
     rdelta =sqrt(delta) ;
     cout<<rdelta ;
     cout<<"\n" ;
     if(delta > 0){
         cout<<"there are two solution \n" ;
         x1 =(-b - rdelta)/(2 * a)  ;

         x2 =(-b  + rdelta)/(2 * a)  ;
         cout<<"\n the  solution one x1 is  \n" ;
         cout<<x1 ;
         cout<<"\n the   solution two x2  is \n" ;
         cout<<x2 ;
         cout<<"\n" ;
     }
     else if (delta == 0)
     {
         x1=x2 = (-b)/(2 * a) ;
          cout<<"there   solution double x1 and  x2  \n" ;
          cout<<x1 ;
          cout<<"\n" ;
          cout<<x2 ;
          cout<<"\n" ;
     }
     else{
         cout<<" don\'t  solution \n" ;
     }


    system("pause") ;

    return 0 ;
}