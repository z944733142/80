#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	char c[50];
	
	scanf("%d", &a);
	getchar();
	while(a--)
	{
		gets(c);
		for (int i = (int)strlen(c) - 1; i >= 0; i--)
		{			if(c[i] >= 'a' && c[i] <= 'z' || c[i] >= 'A' && c[i] <= 'Z') printf("%c", c[i]);
		}
		printf("\n");
	}
}
