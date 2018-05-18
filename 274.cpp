#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int a, i;
	char c[10000];
	while(scanf("%d", &a) != EOF)
	{
		if ( a == 0)
		{
			printf("0\n");
			continue;
		}
		for(i = 0; a != 0; i++)
		{
			c[i] = a % 2 + '0';
			a = a / 2;
		}
		c[i] = '\0';
		for(int j = (int)strlen(c) - 1; j >= 0; j--)
		{
			printf("%c", c[j]);
		}
		printf("\n");
	}
}
