#include <iostream>

using namespace std ;

int main(){


// int x[] = {1,2,3,4,14} ;

// //sizeof(x) / sizeof(x[0])  --------> Theorem 
// //sizeof(x) / sizeof(int)  --------> Theorem 
// //sizeof(x) / sizeof(string)  --------> Theorem 
// cout<<sizeof(x) / sizeof(x[0])<<endl ;
// cout<<"  "<<endl ;
// cout<<"  "<<endl ;
// cout<<"  "<<endl ;
// cout<<"  "<<endl ;
// cout<<"  "<<endl ;
// int a[3][4]  = { {1,2,3,4},{5,6,7,8},{20,22,-50,0} } ;
// cout<<a[0][0]<<endl ;
// cout<<a[0][1]<<endl ;
// cout<<a[0][2]<<endl ;
// cout<<a[0][3]<<endl ;


// cout<<"  "<<endl ;
// cout<<"  "<<endl ;
// cout<<"  "<<endl ;
// cout<<"  "<<endl ;
// cout<<"  "<<endl ;


int   a[2][3] ={ {2,53,10},{0,40,26}} ;


for (int row = 0; row < 2; row++)
{
    for (int col = 0; col < 3; col++)
            {
                cout<<a[row][col]<<" ";
            }
            cout<<" "<<endl ;
}

system("pause") ;
return  0 ;
}