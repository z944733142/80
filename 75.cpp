#include<stdio.h>
int main () {
	int month[12] = {31 ,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int a, b, c, d, sum;
	scanf("%d", &d);
	while(d--)
	{
	month[1] = 28;
	sum = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0) 
	{
		month[1] = 29 ;
	}
	for (int i = 0; i < b - 1; i++)
	{
		sum += month[i];
	}
	sum += c;
	printf("%d\n", sum);
	}
	
}
