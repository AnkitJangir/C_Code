#include<stdio.h>
int main()
{
  int n,i,j,space;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
      {
          for(space=1;space<=n-i;space++)
          printf(" ");
          for(j=1;j<=i*2-1;j++)
          {
              if(j==1 || j==i*2-1 || i==n)
              printf("*");
              else 
              printf(" ");
          }
      printf("\n");
       }
}
