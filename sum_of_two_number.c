#include<stdio.h>
int main()
{
	float a[20],b[20],sum;
	int i,n;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%f %f",&a[i],&b[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		sum = a[i] + b[i];
		printf("%f\n",sum);
	}
	
}
