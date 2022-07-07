#include <iostream>

using namespace std ;


class Company{


    private:
    string name ;
    int id ;
    float salary ;

public :
void add(string n ,int i ,float sal){

    name = n ;
    id = i ;
    salary = sal ;

}


    public:
    void  print(){

        cout<<"Your name is \t :"<<name<<endl;
        cout<<"Your id is \t :"<<id<<endl;
        cout<<"Your salary  is \t :"<<salary <<endl;
        
        
            }
} ;

int  main(){


Company obj1 ;
// obj1.name ="nader" ;
// obj1.id= 126208588 ;
// obj1.salary = 1200.55;
obj1.add("Nader",12608588,1200) ;
obj1.print() ;

   system("pause") ;
    return 0 ;
}