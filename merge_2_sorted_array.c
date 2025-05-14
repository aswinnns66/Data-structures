#include<stdio.h>
int main()
{
	int a[10];
	int b[10],m,n;
	int i,j,c[30];
	int temp;
	printf("Enter the size of first array : ");
	scanf("%d",&m);
	printf("Enter the size of second array : ");
	scanf("%d",&n);
	printf("Enter the first array elements : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter the second array element : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		c[m+i]=b[i];
	}
	for(i=0;i<m+n;i++)
	{
		for(j=0;j<m+n;j++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}
