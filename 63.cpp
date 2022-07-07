#include <iostream>

using namespace std ;

class Book
{
    public :
    string name ;
    int price ;
    int pages ;

    void print(){

        cout<<" name "<<name<<endl ;
        cout<<" price "<<price<<endl ;
        cout<<" pages "<<pages<<endl ;
    }


};



int main(){


   Book ob1 ;
   ob1.name= "ahmed" ;
   ob1.price =2500 ;
   ob1.pages= 200 ;
ob1.print() ;


     system("pause") ;
    return 0 ;
}