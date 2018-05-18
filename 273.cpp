#include<stdio.h>
int main()
{
	int a, sum;
	char c[250];
	scanf("%d", &a);
	getchar();
	while(a--)
	{
		sum = 0;
		gets(c);
		for (int i = 0; c[i] != '\0'; i++)
		{
			if ( c[i] >= 'a' && c[i] <= 'z') sum++;
		}
		sum %= 26;
		if (sum == 0) sum += 'z';
		else
		sum += 'a' - 1;
		printf("%c\n", sum);
	}
} 
