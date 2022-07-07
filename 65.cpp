#include <iostream>
using namespace std ;

class Book{

public:

string name ;
int price ;

void print(Book obj1,Book obj2)
{
    cout<<"name 1 \t"<<obj1.name<<"name 2 \t"<<obj2.name<<endl ;
}


} ;

int main()
{
    
    Book obj1 ;
    Book obj2 ;
    obj1.name ="ahmed " ;
    obj2.name = "ali " ;
    obj1.print(obj1,obj2) ;




    system("pause") ;
     return 0 ;



}