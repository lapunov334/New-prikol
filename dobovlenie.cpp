#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
main() {
	const int maxSize=50;
	int a[maxSize],save[maxSize],b[maxSize],size,i,x,sum=0;
	srand(time(0));
	printf("Vvedite razmer macciva[1..50]\n");
	scanf("%d",&size);
	while(size<1 || size>50)
	{
		printf("Ne correctni vvod dannix");
		scanf("%d",&size);
	}
	printf("Macciv:\n");
	for(i=0; i<size; i++)
	{
		a[i]=rand()%101-50;
		printf("%d ",a[i]);
	}
	int m;
	printf("\n");
    printf("Kolichestvo elementov dlya vstavki: ");
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    int pos,ans=0;
    printf("Kuda vstavit? ");
    scanf("%d",&pos);
 	int n;
    for(i=pos-1; i<size; i++)
    {
        save[ans]=a[i];
    	ans++;
	}
 	int temp=0;
    for(i=pos-1; i<pos+m; i++)
    {
        a[i]=b[temp];
    	temp++;
	}
	int anss=0;
    for(i=pos+m-1; i<pos+m+ans; i++)
    {
        a[i]=save[anss];
    	anss++;
	}
 
    for(i=0; i<size+m; i++)
    {
        printf("%d ", a[i]);
    }
 
	return 0;
} 
 
