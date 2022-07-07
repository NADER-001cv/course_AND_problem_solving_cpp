#include <iostream> ;
using namespace std ;


int main(){

    int ftemp ;
    cout<<"enter the temperature ";
    cin>>ftemp ;
    int ctemp = (ftemp - 32)*5 /9;
    cout<<"the result of   "<<ctemp<<'\n';
    system("pause") ;
    return 0 ;
}