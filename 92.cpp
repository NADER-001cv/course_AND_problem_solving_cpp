#include<iostream>
#include<conio.h>

using namespace std;


int main(){

     int i,n; 

     cout<<"Enter number for which you want to generate table:"; 

     cin>>n;

      cout<<"\n\n";

       for(i=1;i<=10;++i)

         cout<<"\t"<<n<<"*"<<i<<"="<<n*i<<"\n"; 



system("pause") ;

         return 0;
         
         
         
         }
