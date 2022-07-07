#include <iostream>
#include <cmath>

using namespace std ;

int main()
{


int a,b,c ;
cout<<"Enter three number \n" ;

cin>>a>>b>>c ;
if( a> b && a > c)
  {
      if(c < a && c < b )
      {
          cout<<"The small  number c \t"<<c<<endl ;
      }
       cout<<"The greater  number a \t"<<a<<endl ;
  }else if( b > a && b > c)
  {
      if(a < b && a < c)
      {
            cout<<"The small  number a \t"<<a<<endl ;
      }
        cout<<"The greater  number b \t"<<b<<endl ;
  }else{



        cout<<"The greater  number c \t"<<c<<endl ;
          cout<<"The small  number b \t"<<b<<endl ;
  }



      system("pause")  ;
    return 0 ;
}