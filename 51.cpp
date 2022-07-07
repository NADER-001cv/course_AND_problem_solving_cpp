#include <iostream>



using namespace  std ;
string reverseText(string txt)
{
         string reverse = "" ;  

         for (int i = 0; i < sizeof(txt); i++)
         {
             reverse = txt[i] + reverse ;
         }
         
         return reverse ;

}

int main()
{
   string txt ;
   cout<<"Enter the text \t :" ;
   cin>>txt ;
   cout<<"The text  is reversed :\t"<<reverseText(txt)<<endl ;


    system("pause")  ;
    return 0 ;
}