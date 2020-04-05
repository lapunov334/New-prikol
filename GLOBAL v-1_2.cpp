#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
main() {
void Ryka(int *, int);
void Rand(int *, int);
void Vivod(int *, int);	
int Summ(int*, int);	
float Srednee(int*, int);
int Maximum(int*, int);
int Minimum(int*, int);
void Sortirovka_Vozrast(int *, int);
void Sortirovka_Ybivan(int *, int);
void Delite_Nomer(int *, int, int);
void Delite_Znach(int *, int, int);

//--------------//
int Schet(int *, int, int);
//--------------//

//--------------//
int Schet_2(int *, int);
//-------------//




////////////////////////////////////////////////////////
	int *a=0;
	int x1,m,x2,x3,r1,r,Sc,size,i,k=0,x,gg,fl=0;
	a=(int*)malloc(size*sizeof(int));
	srand(time(0));
	do
	{
		printf("1.Zampolnenie massiva\n");
		printf("2.Vivod\n");
		printf("3.Summa elementov massiva\n");
		printf("4.Srednee arifmeticheskoe\n");
		printf("5.Maximalnoe znachenie\n");
		printf("6.Minimalnoe znachenie\n");
		printf("7.Sortirovka\n");
		printf("8.Delite elementov massiva\n");
		printf("9.Dobovlenie elementov massiva\n");
		printf("10.Exit\n");
		scanf("%d",&x);
		switch(x)
		{
		case 1: 
			printf("1.Vvod s klaviatyri\n");
			printf("2.Random\n");
			scanf("%d",&x1);
			k=1;
			switch(x1)
			{
				case 1:	
				printf("Vvedite razmer macciva:\n");
				scanf("%d",&size);
				while(size<1)
				{
					printf("Ne correctni vvod dannix");
					scanf("%d",&size);
				}
				Ryka(a,size);
				
				break;
			//////////////////////////////////////////
				case 2:
				printf("Vvedite razmer macciva:\n");
				scanf("%d",&size);
				while(size<1)
				{
					printf("Ne correctni vvod dannix");
					scanf("%d",&size);
				}
				Rand(a,size);
				
				break;
				default:printf("Ne verni vvod\n");
				break;
			}
		break;
		case 2: 
				if(k==1)
				{	
					Vivod(a,size);
					printf("\n");
				}
				else 
				{
					printf("Massiv pust, snachalo zapolnite ego!\n");
				}
		break;	
		case 3:
			if(k==1)
			{
				printf("%d\n",Summ(a,size));
			}
			else 
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");
			}
		break;
		case 4:
			if(k==1)
			{	
				printf("%.2f\n",Srednee(a,size));
			}
			else 
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");	
			}
			break;	
		case 5:
			if(k==1)
			{	
				printf("Maximalni element: %d\n",Maximum(a,size));
			}
			else
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");	
			} 
		break;
		case 6:
			if(k==1)
			{
				printf("Minimymalni element: %d\n",Minimum(a,size));
			}
			else
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");	
			} 
		break;
		case 7:
			if(k==1)
			{
				printf("1.Po vozrastaniu\n");
				printf("2.Po ybivaniu\n");
				scanf("%d",&x2);
				switch(x2)
				{
					case 1:
					Sortirovka_Vozrast(a,size);
					break;
					case 2:
					Sortirovka_Ybivan(a,size);
					break;
					default:
						printf("Ne verni vvod\n");
					break;
				
				}		
			}
			else 
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");
			}
		break;
	 	case 8:
			if(k==1)
			{
				printf("1.Po nomery\n");
				printf("2.Po znacheniu\n");
				scanf("%d",&x3);
				switch(x3)
				{
					case 1:
						printf("Vvedite nomer kotori xotite delite: ");
						scanf("%d",&r1);
						while(r1>size || r1<0)
						{
							printf("Necorrictni vvod!\n");
							printf("Poprobyite snova: ");
							scanf("%d",&r1);
						}
						Delite_Nomer(a,size,r1);
						size--;
					break;
					case 2:
						printf("Vvedite chislo kotoroe bydem delite: ");
						scanf("%d",&r);
						Sc=Schet(a,size,r);
						Delite_Znach(a,size,r);
						size-=Sc;
					break;
					default:
						printf("Ne verni vvod\n");
					break;	
				}
			}
			else
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");
			}
		break;
		case 9:
			if(k==1)
			{
				m=Schet_2(a,size);
				size+=m;
			}
			else
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");
			}		
		break;
		case 10:
			fl=1;
		break;
		default:
			printf("Ne verni vvod\n");
		break;	
		}
	printf("Press any key\n");
	getch();
	system("cls");	
	}while(fl==0);
	printf("Horoshego dnia :)");
	free(a);
	a=0;
	return 0;
} 

//////////////////////////////////////////////////////////////////////
void Ryka(int *a, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Vvedite %d element: ",i+1);
		scanf("%d", a+i);		
	}
	return;
}
/////////////////////////////////////////////////////////////////////////////	
void Vivod(int *a, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ", a[i]);		
	}	
}
///////////////////////////////////////////////////////////////////
void Rand(int *a, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		a[i]=rand()%101-50;		
	}	
}	
///////////////////////////////////////////////////////////////////////////	
int Summ(int *a, int size)
{
	int i,sum=0;
	for(i=0; i<size; i++)
	{
		sum+=a[i];		
	}	
	return sum;
}
/////////////////////////////////////////////////////////////////////////	
float Srednee(int *a, int size)
{
	int i,res,sum=0;
	for(i=0; i<size; i++)
	{
		sum+=a[i];
	}
	res=float(sum)/size;
	return res;	
}
////////////////////////////////////////////////////////////////////////////	
int Maximum(int *a, int size)
{
	int i,max=a[0];
	for(i=1; i<size; i++)
	{
		 if(a[i]>max)
		 {
			max=a[i];	 	
		 }		
	}	
	return max;
}	
///////////////////////////////////////////////////////////////////////
int Minimum(int *a, int size)
{
	int i,min=a[0];
	for(i=1; i<size; i++)
	{
		 if(a[i]<min)
		 {
			min=a[i];	 	
		 }		
	}	
	return min;
}	
///////////////////////////////////////////////////////////////////////////////
void Sortirovka_Vozrast(int *a, int size)
{
	int j,i,x;
	for(j=0; j<size-1; j++)
	{
		for(i=0; i<size-1; i++)
		{
			if(a[i]>a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}								
		}
	}
	return;	
}	
////////////////////////////////////////////////////////////////////////////////
void Sortirovka_Ybivan(int *a, int size)
{
	int j,i,x;
	for(j=0; j<size-1; j++)
	{
		for(i=0; i<size-1; i++)
		{
			if(a[i]<a[i+1])
			{
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
			}								
		}
	}
	return;	
}	
//////////////////////////////////////////////////////////////////////////
void Delite_Nomer(int *a, int size, int r1)
{
	int i;
	for(i=r1-1; i<size; i++)
	{
		a[i]=a[i+1];
	}
	size--;	
	if (size==0)
	{
		printf("Vash masiv pust..\n");
	}
	return;
}
//////////////////////////////////////////////////////////////////////////////	
void Delite_Znach(int *a, int size, int r)
{
	int i,j;
	for(i=0; i<size; i++)
	{
		if(a[i]==r)
		{
			for(j=i; j<size-1; j++)
			{
				a[j]=a[j+1];
			}
			i--;
			size--;		
		}
	}
	return;	
}
//////////////////////////////////////////////////////	
int Schet(int *a, int size, int r)
{
	int i,j,fl=0;
	for(i=0; i<size; i++)
	{
		if(a[i]==r)
		{
			fl++;	
		}
	}
	return fl;	
}
/////////////////////////////////////////////////////////
int Schet_2(int *a, int size)
{
	int *b=0,*save=0;
	int m,pos,ans=0,temp=0,i,anss=0;
	b=(int*)malloc(size*sizeof(int));
	save=(int*)malloc(size*sizeof(int));
	printf("Kolichestvo elementov dlya vstavki: ");
    scanf("%d",&m);
	for(i=0; i<m; i++)
	{
    	scanf("%d",&b[i]);
    }
    printf("Kuda vstavit? ");
    scanf("%d",&pos);
    while(pos>size || pos<=0)
    {
    	printf("Ne correctni vvod dannix!\nPoprobyite snova: ");
		scanf("%d",&pos);
	}
	for(i=pos-1; i<size; i++)
    {
    	save[ans]=a[i];
    	ans++;
	}
    for(i=pos-1; i<pos+m; i++)
    {
      	a[i]=b[temp];
    	temp++;
	}
    for(i=pos+m-1; i<pos+m+ans; i++)
    {
    	a[i]=save[anss];
    	anss++;
	}
	free(b);
	b=0;
	free(save);
	save=0;
	return m; 
}




