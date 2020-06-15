#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include<time.h>
main() {
	const int maxSize=50;
	int a[maxSize],x,k=0,n,gg,y[maxSize],b[maxSize],j=0,i;
	srand(time(0));
	printf("Vvedite razmer macciva X [1..50]\n");
	scanf("%d",&n);
	while(n<1 || n>50)
		{
			printf("Ne correctni vvod dannix");
			scanf("%d",&n);
		}	
	for(i=0; i<n; i++)
		{		
			a[i]=rand()%7-3;
		}
	printf("\n");
	printf("Massiv X: \n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
 
	//////////////////////////////
	printf("\n");
 
	int g,l=0;
	for(i=0; i<n; i++)
	{
		if(a[i]>0)
		{
			l++;
		}
	}
	for(j=0; j<n-1; j++)
	{
		for(i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}								
		}
	}
	for(i=n-1; i>0; i--)
	{
		b[k]=a[i];
		k++;
	}
	for(j=0; j<l-1; j++)
	{
		for(i=0; i<l-1; i++)
		{
			if(b[i]>b[i+1])
			{
				x=b[i];
				b[i]=b[i+1];
				b[i+1]=x;
			}								
		}
	}
	for(i=0; i<k; i++)
	{
		if(b[i]==0)
		{
			for(j=i; j<k-1; j++)
			{
				b[j]=b[j+1];
			}
			i--;
			k--;	
		}
	}
	for(i=0; i<n; i++)
	{
		gg=b[i];
		for (j=i+1; j<n; j++)
		{
			if(gg==b[j])
			{
				for(g=j; g<k; g++)
				{
					b[g]=b[g+1];
				}
				j--;
				n--;
			}
		}
	}
	/////////////////////////////////Massiv C inter
	printf("\n");
	printf("Massiv Y: \n");
	for(i=0; i<n; i++)
	{
		printf("%d ",b[i]);
	}
 
 
	return 0;
}
