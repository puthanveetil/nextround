#include <stdio.h>
main()
{
int n,k,num[50],i;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;num[i]>=num[k-1]&&num[i]&&i<n;i++);
printf("%d",i);
}