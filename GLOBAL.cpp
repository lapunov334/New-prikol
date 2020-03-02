#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
main() {
	const int maxSize=50;
	
	int a[maxSize],b[maxSize],save[maxSize],x1,pos,ans=0,n,size,temp=0,i,anss=0,j,m,x,fl=0,k=0,gt=0,x2,fg=0,x3,r,r1,finish=0;
	
	srand(time(0));
	fflush(stdin);
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
				printf("Vvedite razmer macciva[1..50]\n");
				scanf("%d",&size);
				while(size<1 || size>50)
				{
					printf("Ne correctni vvod dannix!\nPoprobyite snova: ");
					scanf("%d",&size);
				}
					for(i=0; i<size; i++)
				{
					printf("Vvedite %d element: ",i+1);
					scanf("%d",&a[i]);
				}
				break;
				case 2:
				int g,b;
				printf("Vvedite diapozon randoma:\n");
				printf("Nachalnoe znachenie: ");
				scanf("%d",&g);
				printf("Konechnoe znachenie: ");
				scanf("%d",&b);
				while(g>b)
				{
					printf("Necorrectni vvod!\n");
					printf("Poprobyite snova:\n");
					scanf("%d",&g);
					scanf("%d",&b);
				}
				printf("Vvedite razmer macciva[1..50]\n");
				scanf("%d",&size);
				while(size<1 || size>50)
				{
				printf("Ne correctni vvod dannix!\nPoprobyite snova: ");
				scanf("%d",&size);
				}
				for(i=0; i<size; i++)
				{
					a[i]=rand()%(b-g+1)+g;
				}
				break;
				default:printf("Ne verni vvod\n");
				break;
			}
		break;
		case 2: 
				if(k==1)
				{	
					if(gt==0)
					{	
						if(finish==1)
						{
							for(i=0; i<size+m; i++)
   				 			{
     	   						printf("%d ", a[i]);
    						}
    						printf("\n");
						}
						else 
						{
						
						for(i=0; i<size; i++)
						{	
							printf("%d ",a[i]);
						}
						printf("\n");	
						}
					}
					else 
					{
						printf("Massiv pust, snachalo zapolnite ego!\n");
					}
				}
				else 
				{
					printf("Massiv pust, snachalo zapolnite ego!\n");
				}
		break;
		case 3:
			if(k==1)
			{
			if(finish==1)
			{
				size+=m;
				finish=0;
			}
				int sum1=0;
				for(i=0; i<size; i++)	
				{
					sum1+=a[i];
				}	
			printf("Summa: %d\n",sum1);
			}
			else 
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");
			}
		break;
		case 4:
			if(k==1)
			{
			if(finish==1)
			{
				size+=m;
				finish=0;
			}	
				int sum=0;
				float res=0;
				for(i=0; i<size; i++)
				{
					sum+=a[i];
				}
				res=(float(sum)/size);
				printf("Resault= %.2f\n",res);
			}
			else 
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");	
			}
			break;	
		case 5:
			if(k==1)
			{	
			if(finish==1)
			{
				size+=m;
				finish=0;
			}
				int max=a[0];
				for(i=0; i<size; i++)
				{
					if(a[i]>max)
					{
						max=a[i];			
					}
				
				}	
			printf("Maximym: %d\n",max);
			}
			else
			{
				printf("Massiv pust, snachalo zapolnite ego!\n");	
			} 
		break;
		case 6:
			if(k==1)
			{
				if(finish==1)
			{
				size+=m;
				finish=0;
			}
				int min=a[0];
				for(i=0; i<size; i++)
				{
					if(a[i]<min)
					{
						min=a[i];			
					}
				
				}	
			printf("Minimym: %d\n",min);
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
						if(finish==1)
			{
				size+=m;
				finish=0;
			}	
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
					break;
					case 2:
						if(finish==1)
			{
				size+=m;
				finish=0;
			}
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
						if(finish==1)
			{
				size+=m;
				finish=0;
			}	
							for(i=r1-1; i<size; i++)
							{
								a[i]=a[i+1];
							}
								size--;	
								if (size==0)
								{
									gt=1;
								}
					break;
					case 2:
						if(finish==1)
			{
				size+=m;
				finish=0;
			}
						printf("Vvedite chislo kotoroe bydem delite: ");
						scanf("%d",&r);
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
				printf("Kolichestvo elementov dlya vstavki: ");
    			scanf("%d",&m);
    			while(m>maxSize-size)
				{
					printf("Ne correctni vvod dannix!\nPoprobyite snova: ");
					scanf("%d",&m);
				}
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
				finish=1;
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
	return 0;
} 
