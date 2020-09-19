#include<stdio.h>
#include<math.h>

/* Exponentiation Operation*/


int main() 
{
	int a, b;
	int c = 1;
	printf("number #1 ");
	scanf("%d", &a);
	printf("number #2 ");
	scanf("%d", &b);
	for (b; b > 0; b--)
	{
	    c = c * a;
	}
	printf("The result is %d\n", c);
    return 0;


}




