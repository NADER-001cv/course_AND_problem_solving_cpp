#include <iostream>

using namespace std ;


class Youtube{
private :
string name ;
int video ;
int sub ;
public :
void add(string n, int vi,int subs)
{
  name = n ;
  video = vi ;
  sub = subs ;
}
public:
void print(){
    cout<<"Your name is \t"<<name<<endl ;
    cout<<"Your video is \t"<<video<<endl ;
    cout<<"Your subscribe is \t"<<sub<<endl ;

}

} ;


int main(){

Youtube ob1 ;

ob1.add("course c++",20,1000) ;
ob1.print() ;








system("pause") ;

  return 0 ;


}