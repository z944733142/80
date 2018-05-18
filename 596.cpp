#include<stdio.h>
int main()
{
	int a, b, c, max ;
	while(scanf("%d", &a) != EOF)
	{
		if (a == 0) return 0;
		max = 0;
	while(a--)
	{
		scanf("%d %d", &b, &c);
		if(b + c > max) max = b + c;
		 
	}
	printf("%d\n", max);
	}
}
