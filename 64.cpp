#include <iostream>

using namespace std ;

class Rectangle{
public :
float width ;
float height ;

int aire(){

    return width * height ;
}


} ;









int main(){



    Rectangle rec ;

rec.width = 5;
rec.height=2.5;

cout<<rec.aire()<<endl ;
    system("pause") ;
    return 0 ;
}