#include <iostream> 

using namespace std ;

int main(){


int x = 5 ;

cout<<&x<<endl ;// 3onwan fy  thakyra 

// elmas2oul  3la  ta5zyyn em3nawyyn  elmout8yyraat  houwa pointer 
int *p = &x ;
cout<<p<<endl  ;


float y = 3.5 ;
float *q = &y ;
cout<<"\n \n \n \n" ;
cout<<&y<<endl ;
cout<<q<<endl ;
cout<<"\n \n \n" ;
cout<<"-----------------------------\n" ;
int a[3] = {1,5,25} ;

cout<<&a[0]<<endl ;
cout<<&a[1]<<endl ;
cout<<&a[2]<<endl ;
cout<<"\n \n \n" ;
cout<<"-----------------------------\n" ;
cout<<a<<endl ;
cout<<a+1<<endl ;
cout<<a+2<<endl ;
cout<<"\n \n \n" ;
cout<<"-----------------------------\n" ;
cout<<*a<<endl ;
cout<<*(a + 1)<<endl ;
cout<<*(a + 2)<<endl ;
cout<<"\n \n \n" ;
cout<<"-----------------------------\n" ;

int b[] = {1,20,50} ;

for (int i = 0; i < sizeof(b)/sizeof(b[0]); i++)
{
  cout<<b[i]<<endl ;
  cout<<"\n" ;
cout<<b<<"\t"<<b + 1 << "\t"<<b+2<<endl ; // 3enwan variable adress no9sed &b[i]
cout<<"#############################\n \n \n \n" ;
cout<<*b<<"\t"<<*(b + 1) << "\t"<<*(b+2)<<endl ;
cout<<"#############################\n \n \n \n" ;
}

   system("pause")  ;
    return 0 ;
}