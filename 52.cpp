#include <iostream>
#include <sstream>
#include<string>
using namespace std;
 
int countWord(string s)
{

 if (s.empty())
    {
        return 0;
    }
s+= " " ;
  int count = 0 ;
  for (int i = 0; i < s.length() - 1; i++)
    {
     
    if (s[i] != ' ' && s[i+1] == ' ')
        {
            count++;
        }
     
      
    }

    return count ;

}
int main()
{
    // "Hello World!" و قيمته النص s هنا قمنا بتعريف متغير نصي إسمه
    string txt = "hy in cpp hello";
  
    // cout<<"Enter the phrase \n";
    // cin>>txt ;
  
    
     int numberOfWords = countWord(txt);
    cout << "Total words: \t" << numberOfWords<<endl;

  //  cout<<countword(txt)<<endl;


     system("pause") ;
    return 0;
}