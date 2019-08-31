#include <stdio.h>
int isprime(int num);
int main()
{
    int n;
    scanf("%d",&n);
    if(isprime(n))
    {
      printf("Yes");
    }
    else
    {
      printf("No");
    }
    return 0;
}
    
int isprime(int num)
{  
  int i; 
  int isprime = 1;
  if(num==1)
  {
    return 0;
  }
  for(i = 2;  i < num; i++)  
  {  
 	 if(num % i == 0)       
   	 {             
           isprime = 0;          
           break;     
   	 } 
   }    
   return isprime;
 }
