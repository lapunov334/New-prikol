#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<time.h>
main() {
	
	
	const int maxSize=50;
	int a[maxSize],b[maxSize],x,k=0,n,c[maxSize],m,j=0,i;
	srand(time(0));
	printf("Vvedite razmer macciva A [1..50]\n");
	scanf("%d",&n);
	while(n<1 || n>50)
		{
			printf("Ne correctni vvod dannix");
			scanf("%d",&n);
		}	
	for(i=0; i<n; i++)
		{		
			a[i]=rand()%101-50;
		}

	printf("\n");
	printf("Massiv A: \n");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	/////////////////////////////////cortirovka a[i]
    for(i=0; i<n; i++)
	{
		c[k]=a[i];
		k++;
	}
    for(j=0; j<k-1; j++)
	{
		for(i=0; i<k-1; i++)
		{
			if(c[i]>c[i+1])
			{
				x=c[i];
				c[i]=c[i+1];
				c[i+1]=x;
			}								
        }
    }
    int p=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[p]=c[i];
            p++;
        }
    }
    for(j=0; j<p-1; j++)
	{
		for(i=0; i<p-1; i++)
		{
			if(b[i]<b[i+1])
			{
				x=b[i];
				b[i]=b[i+1];
				b[i+1]=x;
			}								
        }
    }
    int k;
    for(i=0;i<n;i++)
    {
       a[i]=b[k];
       k++;
    }
    /*int l=0;
    for(i=0; i<k; i++)
    {
        if(a[i]==0)
        {
            b[l]=c[i];
            l++;
        }
    }
    for(i=0; i<n; i++)
	{
		c[i]=b[i];
		k++;
	}*/
    ////////////////////////////////
	
	int gg,g,l;
	for(i=0; i<k; i++)
	{
		gg=c[i];
		for (j=i+1; j<k; j++)
		{
			if(gg==c[j])
			{
				for(g=j; g<k; g++)
				{
					c[g]=c[g+1];
				}
				k--;
			}
		}
	}
	
	/////////////////////////////////Massiv C inter
	printf("\n");
	printf("Massiv C: \n");
	for(i=0; i<k; i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
}