#include<stdio.h>
int main()
{
int a[3][5],i,j,key;
printf("Enter the elements : ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d \t",a[i][j]);
}
printf("\n");
}
printf("\n");
printf("Enter the searching element : ");
scanf("%d",&key);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i][j]==key)
{
printf("element found at a[%d][%d]",i,j);
return 0;
}
}
}
printf("Element not found");
return 0;
}

