#include  <iostream>

using namespace  std ;

int main(){

    int  Var = 1500000000 ;
    Var =   (Var*10)/ 10 ;
     cout<<"the result Var is : "<<Var<<endl ;
Var = 1500000000 ;
 Var = (static_cast<double>(Var) * 10) / 10 ; // lehna  ey 7awel  ey d5elha fil rang mt3 double  ama nw3haa yb9aa int
 cout<<"\n" ;
  cout<<"the result new  Var is : "<<Var<<endl ;
     system("pause")  ;
    return 0 ;
}