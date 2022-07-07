#include  <iostream>

using  namespace std ;

int main()
{
     double x , y ;
     char ch ;
     cout<<"Enter two number \n" ;
     cin>>x>>y ;
     cout<<"\n" ;
     cout<<"Enter your operation like this (+,- and * ) is : \t";
     cin>>ch ;
     switch (ch)
     {
     case '+':
        cout<<x<<" + "<<y<<" =\t"<<x + y<<endl  ;
         break;
     case '-':
         cout<<x<<" - "<<y<<" =\t"<<x - y<<endl  ;
         break;
     case '*':
         cout<<x<<" * "<<y<<" =\t"<<x * y<<endl  ;
         break;
     
     default:
     cout<<"Error pleaze enter operation like this (+,- ,*) and thanks\n" ;
         break;
     }


    system("pause") ;

    return 0 ;
}
