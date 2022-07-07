#include <iostream> 

#include <cmath>

using namespace std ;


int main()
{
string p1,pdad1,p2,pdad2;
cout<<"enter your names \n";
cout<<"Enter person p1 \t \n" ;
cin>>p1 ;



cout<<"Enter person pdad1 \t \n" ;
cin>>pdad1 ;

cout<<"Enter person p2 \t \n" ;
cin>>p2 ;

cout<<"Enter person pdad2 \t \n" ;
cin>>pdad2 ;
if (pdad1 == pdad2)
{
   cout<<"ARE Brother"<<endl ;
}
else
{
     cout<<"NOT"<<endl ;
}



      system("pause")  ;
    return 0 ;

}