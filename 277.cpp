#include<stdio.h>
#include<string.h>
int main ()
{
	int a, b;
	char c[6], d[6];
	scanf("%d", &a);
	while(a--)
	{
		scanf("%d", &b);
		getchar();
		gets(c);
		b--;
		while(b--)
		{
			gets(d);
			if (strcmp(d ,c) < 0) strcpy(c, d);
		}
		puts(c);
	}
}
