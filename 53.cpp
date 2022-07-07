#include <iostream>
#include <iomanip>

using namespace std ;

int main()
{
    
    int n  , cube;
    cout<<"Enter the number \t"<<endl ;
    cin>>n ;
    for ( n = 1; n <= 10; n++)
    {
        cout<<setw(4)<<n ;
         cube = n *n *n ;
         cout<<setw(6)<<cube<<endl ;
    }
    
     system("pause") ;
    return 0 ;
}