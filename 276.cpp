#include<stdio.h>
int main()
{
	int a; 
	char b, c;
	
	scanf("%d", &a);
	getchar();
	while(a--)
	{
		scanf("%c %c", &b, &c);
		getchar();
		if(b < c) printf("%c>%c\n", b, c);
		if(b == c) printf("%c=%c\n", b, c);
		if(b > c) printf("%c<%c\n", b, c);
	}
}
