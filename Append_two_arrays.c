#include<stdio.h>
int main()
{
	int a[10];
	int b[10],m,n;
	int i,c[30];
	printf("Enter the size of first array : ");
	scanf("%d",&m);
	printf("Enter the size of second array : ");
	scanf("%d",&n);
	printf("Enter the first array element : ");
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
	printf("First array : ");
	printf("\n");
	for(i=0;i<m;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	printf("Second array : ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",b[i]);
	}
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		c[m+i]=b[i];
	}
	printf("\n");
	printf("Append array : ");
	printf("\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d",c[i]);
	}
	return 0;
}
