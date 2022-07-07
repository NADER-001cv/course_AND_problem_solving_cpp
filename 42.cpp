#include <iostream>
#include <cmath>


using namespace std;


int main()
{

   double x ,y ,r1,r2 , sumdg;
       cout<<"Enter two numbers : \t \n" ;

    cin>>x>>y ;
    r1 =  fmod(x , 10) ;
    r2 = fmod(y,10) ;
    cout<<r1<<endl ;
    cout<<r2<<endl;
    cout<<"\n" ;
    sumdg = r1 + r2 ;
    cout<<"The result of sum digit is :\t"<<endl ;
    cout<<r1<< " + "<<r2<<" = "<<sumdg<<endl ;
     system("pause") ;
    return 0 ;
}