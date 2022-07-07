#include <iostream>

using namespace std ;

int main(){

    int n ,f = 1 ;

    cout<<"Enter your number postif\n" ;
    cin>>n ;
    for (int i = 1; i <= n; i++)
    {
        if(n > 0)
        f *=  i ;
    }

    cout<<f<<"\n" ;
    cout<<"\n" ;
    

 

    system("pause") ;
    return 0 ;
}