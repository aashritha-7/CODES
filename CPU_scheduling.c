#include<stdio.h>
int main()
{
	int t,i,a[70],j,m,res[70],n,l;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		scanf("%d",&l);
		if(n!=1)
		{
			for(j=0;j<(n*l);j++)
			{
				scanf("%d",&a[j]);
			}
		}
	else if(n==1)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[j]);
		}
	}
	if(n==1)
	{
		for(j=0;j<l;j++)
		{
			printf("%d ",a[j]);
		}
	}else{
		for(j=0;j<(n*l);j++)
		{
			if((j+l)<(n*l))
			{
				if(a[j]<=a[j+l])
				{
					printf("%d %d ",a[j],a[j+l]);
				}
				else{
					printf("%d %d ",a[j+l],a[j]);
				}
			}
		}
	}
		printf("\n");
	}
}
***
2 -- test cases
2 3 -- no. of queues and their capacities
1 3 1 -- priorities--
2 1 50
1 5
50 1 2 48 5 
o/p : -- least numbers have the highest priorities
1 2 1 3 1 50
50 1 2 48 5
