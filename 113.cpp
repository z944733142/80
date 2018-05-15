#include<stdio.h>
#include<string.h>
int main() {
	int key = 1;
	char c[1005];
	while(gets(c) != NULL)
	{
		for (int i = 0 ; i < (int)strlen(c) - 2 ;i++)
		{
			if (strncmp(&c[i],"you",3) == 0)
			{
			c[i] = 'w';
			c[i+1] = 'e';
			c[i+2] = 17;
			}
		}
		for(int i = 0 ; i< (int)strlen(c) ; i ++)
		{
			if (c[i] != 17) printf("%c",c[i]);
		}
		printf("\n");
	}
} 

