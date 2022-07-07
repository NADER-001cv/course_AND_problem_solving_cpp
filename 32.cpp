#include <iostream>

using namespace std ;
  double findmax(double a, double b, double c)
  {
       if( a > b && a > c)
       {
         return  a  ;
       }
        else if(b > a && b > c)
         {
               return  b ;
         }
          else
           {
                 return c   ;
           }
  }
int  main()
{
    
    double x , y ,z ;
    cout<<"Enter three number \t \n" ;

cin>>x;

cin>>y;

cin>>z;

cout<<"The Maximum number is \t"<<findmax(x,y,z)<<endl ;
// cout<<findmax(25,100000,1000)<<endl ;
// cout<<findmax(2500,-100,1000)<<endl ;

   system("pause")  ;
    return 0 ;
}