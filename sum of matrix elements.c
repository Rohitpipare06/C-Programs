#include<stdio.h>
int main()
{
	int matrix[3][3],i,j,sum=0;
	printf("\n Enter matrix data : ");
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\n The matrix is : matrix sum is ");
	printf("\n");
    for(i=0;i<3;++i)
	{
		sum=0;
		for(j=0;j<3;++j)
		{
			printf("|%d|",matrix[i][j]);
			sum=sum+matrix[i][j];
		}
		printf("------------>%d",sum);
		printf("\n");
	}
	return 0;
}
