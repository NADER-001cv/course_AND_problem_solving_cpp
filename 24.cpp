#include <iostream>

using  namespace std ;

int  main(){

    int gr ;
    cout<<"Enter your grade \n" ;
    cin>>gr ;


    if(gr > 49 && gr != 0)
    {

        if(gr >= 50 && gr <= 60)
        {
          cout<<"D"<<endl ;
        }
        else if( gr >=60 && gr <= 70)
        {
             cout<<"C"<<endl ;
        }
        else if(gr >= 70 && gr <=80)
        {
                 cout<<"B"<<endl ;
        }
        else if(gr >= 80 && gr <=90)
        {
                 cout<<"B+"<<endl ;
        }
        else if(gr >= 90 && gr <=100)
        {
                 cout<<"A"<<endl ;
        }
        else
        {
            cout<<"your grade greater than 100\n" ;
        }

    }
    else
    {
        cout<<"Bye \n" ;
    }
    system("pause") ;
    return 0 ;


}