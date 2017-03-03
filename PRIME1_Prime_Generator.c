#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,num,a[10],b[10],k,d;
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	
	for(i=1;i<=num;i++)
	{
		for(j=a[i];j<=b[i];j++)
		{
			if(j==1)
				j=2;
			d=sqrt(j);
			for(k=2;k<=d;k++)
			{
				if(j%k==0)
					break;
			}
			if(k==d+1)
				printf("\n%d",j);		
		}
	}
}
