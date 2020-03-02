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
	printf("Vvedite schislo kotoroe bydem delite ");
	scanf("%d",&x);
	int j;
	for(i=0; i<size; i++)
	{
		if(a[i]==x)
		{
			for(j=i; j<size-1; j++)
			{
				a[j]=a[j+1];
			}
			i--;
			size--;		
		}		
	}
	
	for(i=0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	
	
	
	
	
	return 0;
}
