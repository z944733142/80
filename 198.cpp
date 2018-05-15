#include<stdio.h>
int main() 
{
	char c[11],b;
	int a, i;
	
	scanf("%d", &a);
	getchar();
	while(a--)
	{
		gets(c);
		for(i = 0; c[i] != '\0'; i++) 
		{
			if (c[i] == '0') c[i] = 'O';
			if (c[i] == '1') c[i] = 'O';
			if (c[i] == '2') c[i] = 'T';
			if (c[i] == '3') c[i] = 'T';
			if (c[i] == '4') c[i] = 'F';
			if (c[i] == '5') c[i] = 'F';
			if (c[i] == '6') c[i] = 'S';
			if (c[i] == '7') c[i] = 'S';
			if (c[i] == '8') c[i] = 'E';
			if (c[i] == '9') c[i] = 'N';

		}
		for(i = i - 1; i >= 0; i--) 
		{
			printf("%c", c[i]);
		}
		printf("\n");
	}
}
