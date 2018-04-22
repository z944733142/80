#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[25]={1,1},b,j;
	for(int i=2;i<25;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	scanf("%d",&b);
	while(b--)
	{
		scanf("%d",&j);
		printf("%d\n",a[j-1]);
	}
	}

