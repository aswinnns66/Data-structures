#include<stdio.h>
int main()
{
	int i,j,k=0;
	int sparse_matrix[4][5] = 
	{
		{0,0,7,0,9},
		{0,0,5,7,0},
		{0,0,0,0,0},
		{0,2,3,0,0}
	};
	int size = 0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			if(sparse_matrix[i][j] != 0)
			{
				size++;
			}
		}
	}

int matrix[3][size];
for(i=0;i<4;i++)
{
	for(j=0;j<5;j++)
	{
		if (sparse_matrix[i][j] != 0)
		{
			matrix[0][k]=i;
			matrix[1][k]=j;
			matrix[2][k]=sparse_matrix[i][j];
			k++;
		}
	}
}
for(i=0;i<3;i++)
{
	for(j=0;j<size;j++)
	{
		printf("%d",matrix[i][j]);
		printf("\t");
	}
	printf("\n");
}
return 0;
}
	
		
