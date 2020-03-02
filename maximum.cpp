#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
main() {
	const int maxSize=50;
	int a[maxSize],size,i,x,sum=0;
	printf("Vvedite razmer macciva[1..50]\n");
	scanf("%d",&size);
	while(size<1 || size>50)
	{
		printf("Ne correctni vvod dannix");
		scanf("%d",&size);
	}
	for(i=0; i<size; i++)
	{
		printf("Vvedite %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Macciv:\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",a[i]);
		
	}
	printf("\n");
	int max=a[0],min=a[0];
	for(i=0; i<size; i++)
	{
		if(a[i]>max)
		{
			max=a[i];			
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Maximym:%d\nMinimym:%d",max,min);
	
	
	
	
	
	
	
	
	return 0;
} 
