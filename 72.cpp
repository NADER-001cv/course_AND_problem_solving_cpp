#include <iostream>

using namespace std ;


int powerfunc(int m,int n){
     int p = 1;
    int counter =  0;
   if ( n == 0)
   {
     return 1  ;
   }else{

     for (int i = 1; counter != n; i++)
     {

    
       
         p = p * m ;
        counter += 1 ;
    
    
        
     }
     

   }
   
     return p ; 
}
int main(){

  int a ,b , number ;

  cout<<"enter the number a \t"<<endl ;
  cin>>a ;

  cout<<"enter the number b \t"<<endl ;
  cin>>b ;

  cout<<powerfunc(a,b)<<endl  ;







         system("pause")    ;
    return 0 ;
}