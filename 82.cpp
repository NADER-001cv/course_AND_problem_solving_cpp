#include <iostream>

using namespace std ;


int main(){



int  A , B ;
cout<<"Enter the first number A\n";
cin>>A ;
cout<<"Enter the first number B\n";
cin>>B ;

cout    <<" the result  is \t" <<"A "<<A <<" B " <<B <<" A == B "<< (A == B) <<endl ;
cout  <<" the result  is \t"   <<"A "<<A <<" B " <<B<<" A != B "  << (A != B)   <<endl ;
cout  <<" the result  is \t" <<"A "<<A <<" B " <<B <<" A >= B "   << (A >= B)  <<endl ;
cout <<" the result  is \t"  <<"A "<<A <<" B " <<B<<"   A<= B "  << (A <= B)  <<endl ;
cout   <<" the result  is \t" <<"A "<<A <<" B " <<B <<"\t A > B "  << (A > B)   <<endl ;
cout <<" the result  is \t"  <<"A "<<A <<" B " <<B <<"\t A < B "  << (A < B)  <<endl ;


     system("pause") ;
    return 0 ;
}