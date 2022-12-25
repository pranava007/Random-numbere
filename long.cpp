#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
    srand(time(0));
    for (long i=1 ; i <= 50; i=i+1)
   
    {
     std::cout<< rand()<< i <<"\n" ;
     
    }
  

    return 0;
}