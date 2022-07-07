#include <iostream>


using namespace  std ;

int main()
{

    int week = 3 ;
    int day = 7 ;

    for ( int i = 1; i <= week; i++)
    {
        cout<<" the week number \t"<<i<<endl ;
        for (int j = 1; j <= day; j++)
        {
               cout<<"\t the day number \t"<<j<<endl ;
        }
        
    }
    
     system("pause") ;
    return 0 ;
}