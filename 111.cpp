#include<stdio.h>
#include<math.h>
int gcd(int a, int b)
{
	int t;
	a = fabs(a);
	b = fabs(b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	return b?gcd(b, a%b):a;
}
int lcm(int a, int b)
{
	a = fabs(a);
	b = fabs(b);
	return a*b / gcd(a,b);
}

int main () {
	int a1, a2, b1, b2, a, b;
	char c;
	while(scanf("%d/%d%c%d/%d", &a1, &a2, &c, &b1, &b2) != EOF)
	{
		a = lcm(a2,b2);
		b1 *= a/b2;
		a1 *= a/a2; 
		if (c == '+')
		{
		b = gcd(a1+b1,a);
		if ((a1+b1)/b != 1 && (a1+b1)/b % a/b == 0)
		{
			printf("%d\n", (a1+b1)/b / (a/b)) ;
			continue;
		}  
		printf("%d/%d\n", (a1+b1)/b, a/b);
		}
		if (c == '-')
		{
			if (a1-b1 == 0) 
			{
				printf("0\n");
				continue;
			}
		b = gcd(a1-b1,a);
		if ((a1-b1)/b != 1 &&(a1-b1)/b % (a/b) == 0)
		{
			printf("%d\n", (a1-b1)/b / (a/b)) ;
			continue;
		} 

		printf("%d/%d\n", (a1-b1)/b, a/b);
		}
	}
}
