//Hugh McKeeney

//produces all the factors of a given number

#include <stdio.h>

int factor(int a);

int main(void)
{
	int a;
	printf("Enter a number\n");
	
	factor(a);
	
	printf("}");
	
	return 0;
}

int factor(int a)
{
	
	
	int b,c;
	b=2;
	
	scanf("%d", &a);
	
	printf("{");
	
	for(b = 2; b <= a; b++)
	{
		while(a % b ==0)
		{
			a = a / b;
			printf("%d ", b);
			c++;
		}
	}
	
	return b;
}
			