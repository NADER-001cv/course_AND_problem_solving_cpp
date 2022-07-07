#include <iostream>
#include <stdlib.h>
#include <ctime> 

using  namespace std ;

int main(){

    //rand()  teb9a  dyma tal3 nafess lr9am el3achwaia 
    // n7b tl3 ar9am 3achwaia  mo5talyfa   
//srand()  mas2oulaaaa  3la  t8yyre all result ely t5arghom   edala rand()
//time()  t3eeeeeeedd ethwanyy min 1980  l7d taw  ma3naha 1 2 3 .......

/**
 * @brief thearem  start + rand()%(end - start + 1)
 * 
 */
//1 to 6 
srand(time(0))  ;
 for (int i = 1; i <= 7; i++)
{
    /* code */
  cout<<1 + rand()%(6 -1 + 1)<<endl   ;
}

         system("pause")  ;
    return 0 ;
}