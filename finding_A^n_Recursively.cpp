#include <stdio.h>

int power(int x, int n) {
    if(n == 0)
    {
        return 1;
    }
    
    if(n == 1) 
    {
        return x;
    }

    if(n%2 == 0) 
    {
        //if n is even  
        return power(x*x, n/2);
    }
    else
    {
        //if n is odd
        return x * power(x, n - 1);
    }
}

int main() {
	int a, n;
	scanf("%d%d",&a, &n);
    
	int val = power(a, n);
	printf("%d",val);
	
	return 0;
}
