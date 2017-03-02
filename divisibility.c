#include<stdio.h>
int main()
{
	int num,n[20],a[20],b[20],i,j;
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		scanf("%d %d %d",&n[i],&a[i],&b[i]);
	}
	
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=n[i]-1;j++)
		{
			if(j%a[i]==0 && j%b[i]!=0)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
