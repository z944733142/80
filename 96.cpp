#include<stdio.h>
#include<string.h>
int main () {
	int a, key;
	scanf("%d", &a);
	while(a--)
	{
		key = 1;
		char c[20];
		scanf("%s", c);
		for(int i = 1; i < strlen(c); i++)
		{
			if (i == strlen(c) - 1 && key == 1 &&c[i] == '0')
			{
				printf("0\n");
				continue;
			}
			if(key == 1 && c[i] == '0') 
			{
				key = 1;
				continue;
			}
			key = 0;
			printf("%c", c[i]);
		}
		if(key == 0) printf("\n");
	}
}
