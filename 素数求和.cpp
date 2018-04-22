#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	while(a--)
	{
		d=0;
		scanf("%d",&b);
		while(b--)
		{
			scanf("%d",&c);
			e=0;
			for(int i=2;i<=sqrt(c);i++)
			{
				if(c%i==0) 
				{
				    e=1;
					break;	
				}
			}
			if(c==1) e=1;
			if(e==0) d+=c; 
		}
		printf("%d\n",d );
	}
	}

