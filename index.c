#include<stdio.h>
int main()
{
int i,n;
int array[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",array[i]);
if(!(array[i]-i))
printf("%d ",i);
}
return 0;
}
