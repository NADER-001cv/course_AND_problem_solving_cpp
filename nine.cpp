#include  <iostream>

using  namespace std ;

int main(){


    int a = 3 ;
    a = a + 3 ;
    int b = 11 ;
    b %= 2 ;

    int ans = 27 ;
    ans +=10 ;
    cout<<ans<<", ";
    ans -= 7 ;
      cout<<ans<<", ";
ans *= 2 ;
        cout<<ans<<", ";
        ans /= 3 ;
            cout<<ans<<", ";
            ans %= 3 ;
                cout<<ans<<", ";
    cout<<"the result of a  operation "<<a<<endl ;
     cout<<"the result of b operation "<<b<<endl ;
      cout<<"the result of ans  operation "<<ans<<endl ;
    system("pause") ;
    return 0 ;
}