#include <iostream>

using namespace std ;

int main(){

    char oper ;
    float num1 ;
    float result ,num2 ;
    cout<<"Enter all operation like this (*,-,+ and /) \t" ;
    cin>>oper ;
     cout<<"\nEnter two numbers \n"  ;
   cin>>num1 ;
   cin>>num2 ;

   switch(oper)
   {

       case '+' :
         result = num1 + num2 ;
         cout<<num1<<"+"<<num2<<"="<<result<<endl ;
         cout<<"the result is \t"<<result<<endl ;
          cout<<num1<<"+"<<num2<<"="<<result<<endl ;
         cout<<"\n" ;
         break;
       case '*' :
         result = num1 * num2 ;
         cout<<"the result is \t"<<result<<endl ;
          cout<<num1<<"*"<<num2<<"="<<result<<endl ;
           cout<<"\n" ;
         break;
       case '/' :
         result = num1 / num2 ;
         cout<<"the result is \t"<<result ;
          cout<<num1<<"/"<<num2<<"="<<result<<endl ;

           cout<<"\n" ;
         break;
       case '-' :
         result = num1 -  num2 ;
         cout<<"the result is \t"<<result<<endl ;
          cout<<num1<<"-"<<num2<<"="<<result<<endl ;
           cout<<"\n" ;
         break;



       default:
       cout<<"oky" ;
   }


    system("pause")  ;
    return 0 ;
}