#include <iostream> 

#include <cmath>

using namespace std ;


int main()
{

  string name = "nader" ;
int  count ;
  for (int i = 0; i <= sizeof(name); i++)
  {
     cout<<name[i]<<endl ;
  }
   count = sizeof(name) ;

cout<<"count"<<" = "<<count<<endl ;
      system("pause")  ;
    return 0 ;

}