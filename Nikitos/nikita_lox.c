#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
main() {
	srand(time(0));
	const int maxSizeRow=10,maxSizeCol=15;
	int a[maxSizeRow][maxSizeCol],i,j,sizeRow,sizeCol,x;
	printf("Vvedite kol-vo strok: \n");
	scanf("%d",&sizeRow);
	while(sizeRow<1 || sizeRow>maxSizeRow)
	{
		printf("Necorrectni vvod\n");
		scanf("%d",&sizeRow);
	}
	printf("Vvedite kol-vo stolbcov: \n");
	scanf("%d",&sizeCol);
	while(sizeCol<1 || sizeCol>maxSizeCol)
	{
		printf("Necorrectni vvod\n");
		scanf("%d",&sizeCol);
	}
	for(i=0; i<sizeRow; i++)
	{
		for(j=0; j<sizeCol; j++)
		{
			a[i][j]=rand()%101-50;
		}
	}
	printf("\n");
	printf("Matrica : \n");
	for(i=0; i<sizeRow; i++)
	{
		for(j=0; j<sizeCol; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	/////////////////////////////////////////////
    int id=0;
	int	save=0;
	int k=0,p;
        
									for(i=0; i<sizeRow; i++)
									{
										for(p=0; p<sizeCol-1; p++)
										{
											for(j=0; j<sizeCol-1; j++)
											{
												if(a[id][j]>a[id][j+1]) 
												{
													save=a[id][j];
													a[id][j]=a[id][j+1];
													a[id][j+1]=save;
												}	
											}	
										}
										id++;
}

	////////////////////////////////////// 
	printf("NEW MATRICA: \n");
	for(i=0; i<sizeRow; i++)
	{
		for(j=0; j<sizeCol; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		
	return 0;
}