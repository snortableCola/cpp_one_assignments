#ifndef ALGO_H_  
#define ALGO_H_  

#include "types.hpp"  

long fibonacci(const int n)  
{
    if (n <= 1) 
    {
        return n;
    } 
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

   return 0;  
}  

int linear_search(Array * a, const int target) 
{  
   for (int i = 0; i < a->size; ++i) 
   {  
       if (a->data[i] == target) 
       {  
           return i;   
       }  
   }  
   return -1; 
}  

long factorial(const int n)  
{  
   return 0;  
}  

#endif // ALGO_H_
