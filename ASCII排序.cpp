#include<stdio.h>
#include<stdlib.h>
int main()
{
char a[3];
int d,ch;
scanf("%d",&d);
while(d--)
{
getchar();
scanf("%c %c %c",&a[0],&a[1],&a[2]);
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
if(a[j]>a[j+1])
{
ch=a[j];
a[j]=a[j+1];
a[j+1]=ch;
}
printf("%c %c %c\n",a[0],a[1],a[2]);
}
}
