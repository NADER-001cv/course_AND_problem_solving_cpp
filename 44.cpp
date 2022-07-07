#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    double A ,B ,r;

    cout<<"Enter two number is : \t \n" ;
    cin>>A>>B ;
    r = A / B ;
    cout<<"r"<<" = "<<r<<endl ;
    cout<<"the floor \n" ;
    cout<<"\t"<<floor(r) ;
    cout<<"\n" ;
      cout<<"the ceil \n" ;
    cout<<"\t"<<ceil(r) ;
    cout<<"\n" ;
      cout<<"the round \n" ;
    cout<<"\t"<<round(r) ;
    cout<<"\n" ;



     system("pause") ;
    return 0 ;
}