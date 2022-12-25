#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
    srand(time(0));
    for (char i=1 ; i <= 5; i=i+1)
   
    {
     std::cout<< rand()<< i <<"\n" ;
     
    }
  

    return 0;
}