#include <iostream>

using  namespace  std ;

int main()
{
    for (int  i =1; i <= 5; i++)
    {
    switch (i)
    {
    case 1:
        cout<<i<<"\t Nader Chargui \t"<<endl ;
        break;
    case 2:
        cout<<i<<"\t Ahmed Chargui \t"<<endl ;
        break;
    case 3:
        cout<<i<<"\t Ali Chargui \t"<<endl ;
        break;
    case 4:
        cout<<i<<"\t Kossay  Chargui \t"<<endl ;
        break;
    case 5:
        cout<<i<<"\t Mohamed Chargui \t"<<endl ;
        break;
    
    default:
        break;
    }


    }
    

    system("pause")  ;
    return 0 ;
}