#include<stdio.h>
int main () {
	int  a, b, sum, prev;
	char n[4], m[4];
	while (scanf("%s %s", &n, &m) != EOF) 
	{	prev = 0;
		if ( n[0] == '0' && m[0] == '0') return 0;
		sum = 0;
		for(int i = 2; i >= 0; i--) 
		{
			if ( n[i] + m[i] - '0' - '0' + prev > 9) 
			{
			sum++;
			prev = (n[i] + m[i] - '0' - '0' + prev) / 10;
			}
		} 
		printf ("%d\n", sum);
	}
} 
