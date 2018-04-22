#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=0;i<100000;i++)
	{
		if(i%3==a)
		{
			if(i%5==b)
			{
				if(i%7==c) 
				{
				printf("%d",i);
				break ;
				}
			}
			
		}
		
	}
	
 } 
