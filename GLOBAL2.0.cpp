#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include<time.h>
main() {
	const int maxSize=50;
	const int maxSizeRow=10,maxSizeCol=15;
	int x1,pos,n,size,max,min,i,j,x,fl=0,x2,fg=0,x3,x4,x5,x6,sum,schet=0,id,save,k=0,p,y,gg=0,m,t,gh,q=0;
	float res;
	int a[maxSizeRow][maxSizeCol],sizeRow,sizeCol;
	int g[maxSizeRow][maxSizeCol],c[maxSize];
	srand(time(0));
	fflush(stdin);
	setlocale(LC_ALL,"Rus");
	do      
	{
		printf("1.Заполнение матрицы\n");
		printf("2.Вывод\n");
		printf("3.Сумма\n");
		printf("4.Среднее арифметическое\n");
		printf("5.Максимальное значение\n");
		printf("6.Минимальное значение\n");
		printf("7.Сортировка\n");
		printf("8.Удаление\n");
		printf("9.Выход\n");
		scanf("%d",&x);
		switch(x)
		{
		case 1: 
			printf("1.Ввод с клавиатуры\n");
			printf("2.Случайные значения\n");
			scanf("%d",&x1);
			k=1;
			switch(x1)
			{
				case 1:	
				printf("Введите количество строк: \n");
				scanf("%d",&sizeRow);
				while(sizeRow<1 || sizeRow>maxSizeRow)
				{
					printf("Некорректный ввод\n");
					scanf("%d",&sizeRow);
				}
				printf("Введите количество столбцов: \n"); 	
				scanf("%d",&sizeCol);
				while(sizeCol<1 || sizeCol>maxSizeCol)
				{
					printf("Некорректный ввод\n");
					scanf("%d",&sizeCol);
				}
				printf("Введите матрицу: \n");
				for(i=0; i<sizeRow; i++)
				{
					for(j=0; j<sizeCol; j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				break;
				case 2:
				int g,b;
				printf("Введите диапазон рандома:\n");
				printf("Начальное значение: ");
				scanf("%d",&g);
				printf("Конечное значение: ");
				scanf("%d",&b);
				while(g>b)
				{
					printf("Некорректный ввод!\n");
					printf("Попробуйте снова:\n");
					scanf("%d",&g);
					scanf("%d",&b);
				}
				printf("Введите количетсво строк: \n");
				scanf("%d",&sizeRow);
				while(sizeRow<1 || sizeRow>maxSizeRow)
				{
					printf("Некорректный ввод\n");
					scanf("%d",&sizeRow);
				}
				printf("Введите количетсво столбцов: \n");
				scanf("%d",&sizeCol);
				while(sizeCol<1 || sizeCol>maxSizeCol)
				{
					printf("Некорректный ввод\n");
					scanf("%d",&sizeCol);
				}
				for(i=0; i<sizeRow; i++)
				{
					for(j=0; j<sizeCol; j++)
					{
						a[i][j]=rand()%(b-g+1)+g;
					}
				}																								
				break;
				default:
					printf("Не верный ввод\n");
				break;
			}
		break;
		case 2: 
			if(k==1)
			{
				printf("Матрица : \n");
				for(i=0; i<sizeRow; i++)
				{
					for(j=0; j<sizeCol; j++)
					{						
						printf("%4d",a[i][j]);						
					}
					printf("\n");
				}
			}
			else 
			{
				printf("Матрица пуста , сначала заполните её\n");
			}
		break;
		case 3:
			if(k==1)
			{
				printf("1.Всей матрицы\n");
				printf("2.Указанной строки\n");
				printf("3.Указанного столбца\n");
				scanf("%d",&x3);
					switch(x3)
					{
						case 1:
							sum=0;
							for(i=0; i<sizeRow; i++)
							{
								for(j=0; j<sizeCol; j++)
								{
									sum+=a[i][j];
								}
							}
							printf("Сумма элементов матрицы: %d\n",sum);
						break;
						case 2:
							int str;
							sum=0;
							printf("Введите строку: \n");
							scanf("%d",&str);
							while(str<1 || str>sizeRow)
							{
								printf("Некорректный ввод\n");
								scanf("%d",&str);
							}
							for(j=0; j<sizeCol; j++)
							{
								sum+=a[str-1][j];
							}
							printf("Сумма %d строки: %d\n",str,sum);
						break;
						case 3:
								int col;
								sum=0;
								printf("Введите столбец : \n");
								scanf("%d",&col);
								while(col<1 || col>sizeCol)
								{
									printf("Некорректный ввод\n");
									scanf("%d",&col);
								}
								for(i=0; i<sizeRow; i++)
								{
									sum+=a[i][col-1];
								}
								printf("Сумма %d столбца: %d\n",col,sum);
						break;
						default:
								printf("Не верный ввод\n");
						break;	
					}
			}
			else
			{
				printf("Матрица пуста , сначала заполните её\n");
			}
		break;
		case 4:
			if(k==1)
			{
				printf("1.Всей матрицы\n");
				printf("2.Указанной строки\n");
				printf("3.Указанного столбца\n");
				scanf("%d",&x4);
					switch(x4)
					{
						case 1:
							res=0;
							sum=0;
							schet=0;
							for(i=0; i<sizeRow; i++)
							{
								for(j=0; j<sizeCol; j++)
								{
									sum+=a[i][j];
									schet++;
								}
							}
							res=float(sum)/schet;
							printf("Среднее арифметическое элементов матрицы: %.2f\n",res);
						break;
						case 2:
							int str;
							sum=0;
							res=0;
							schet=0;
							printf("Введите строку: \n");
							scanf("%d",&str);
							while(str<1 || str>sizeRow)
							{
								printf("Некорректный ввод\n");
								scanf("%d",&str);
							}
							for(j=0; j<sizeCol; j++)
							{
								sum+=a[str-1][j];
								schet++;
							}
							res=float(sum)/schet;
							printf("Среднее арифметическое %d строки: %.2f\n",str,res);
						break;
						case 3:
								int col;
								sum=0;
								res=0;
								schet=0;
								printf("Введите столбец : \n");
								scanf("%d",&col);
								while(col<1 || col>sizeCol)
								{
									printf("Некорректный ввод\n");
									scanf("%d",&col);
								}
								for(i=0; i<sizeRow; i++)
								{
									sum+=a[i][col-1];
									schet++;
								}
								res=float(sum)/schet;
								printf("Среднее арифметическое %d столбца: %.2f\n",col,res);
						break;
						default:
								printf("Не верный ввод\n");
						break;	
					}
			}
			else
			{
				printf("Матрица пуста , сначала заполните её\n");
			}
		break;	
		case 5:
			if(k==1)
			{
				printf("1.Всей матрицы\n");
				printf("2.Указанной строки\n");
				printf("3.Указанного столбца\n");
				scanf("%d",&x5);
					switch(x5)
					{
						case 1:
							max=a[0][0];
							for(i=0; i<sizeRow; i++)
							{
								for(j=0; j<sizeCol; j++)
								{
									if(a[i][j]>max)
									{
										max=a[i][j];
									}
								}
							}
							printf("Максимальный элемент матрицы: %d\n",max);
						break;
						case 2:
							int str;
							max=a[0][0];
							printf("Введите строку: \n");
							scanf("%d",&str);
							while(str<1 || str>sizeRow)
							{
								printf("Некорректный ввод\n");
								scanf("%d",&str);
							}
							for(j=0; j<sizeCol; j++)
							{
								if(a[str-1][j]>max)
								{
									max=a[str-1][j];
								}
							}
							printf("Максимальный элемент %d строки: %d\n",str,max);
						break;
						case 3:
								int col;
								max=a[0][0];
								printf("Введите столбец : \n");
								scanf("%d",&col);
								while(col<1 || col>sizeCol)
								{
									printf("Некорректный ввод\n");
									scanf("%d",&col);
								}
								for(i=0; i<sizeRow; i++)
								{
									if(a[i][col-1]>max)
									{
										max=a[i][col-1];	
									}									
								}
								printf("Максимальный элемент %d столбца: %d\n",col,max);
						break;
						default:
								printf("Не верный ввод\n");
						break;	
					}
			}
			else
			{
				printf("Матрица пуста , сначала заполните её\n");
			}
		break;
		case 6:
			if(k==1)
			{
				printf("1.Всей матрицы\n");
				printf("2.Указанной строки\n");
				printf("3.Указанного столбца\n");
				scanf("%d",&x5);
					switch(x5)
					{
						case 1:
							min=a[0][0];
							for(i=0; i<sizeRow; i++)
							{
								for(j=0; j<sizeCol; j++)
								{
									if(a[i][j]<min)
									{
										min=a[i][j];
									}
								}
							}
							printf("Минимальный элемент матрицы: %d\n",min);
						break;
						case 2:
							int str;
							printf("Введите строку: \n");
							scanf("%d",&str);
							min=a[str-1][0];
							while(str<1 || str>sizeRow)
							{
								printf("Некорректный ввод\n");
								scanf("%d",&str);
							}
							for(j=0; j<sizeCol; j++)
							{
								if(a[str-1][j]<min)
								{
									min=a[str-1][j];
								}
							}
							printf("Минимальный элемент %d строки: %d\n",str,min);
						break;
						case 3:
								int col;
								printf("Введите столбец : \n");
								scanf("%d",&col);
								min=a[0][col-1];
								while(col<1 || col>sizeCol)
								{
									printf("Некорректный ввод\n");
									scanf("%d",&col);
								}
								for(i=0; i<sizeRow; i++)
								{
									if(a[i][col-1]<min)
									{
										min=a[i][col-1];	
									}									
								}
								printf("Минимальный элемент %d столбца: %d\n",col,min);
						break;
						default:
								printf("Не верный ввод\n");
						break;	
					}
			}
			else
			{
				printf("Матрица пуста , сначала заполните её\n");
			} 
		break;
		case 7:
			if(k==1)
			{
				printf("1.Строк\n");
				printf("2.Столбцов\n");
				printf("3.Всей матрицы\n");
				scanf("%d",&x6);
					switch(x6)
					{
						case 1:
							printf("1.По возрастанию\n");
							printf("2.По убыванию\n");
							scanf("%d",&x1);
							switch(x1)
							{
								case 1:
									id=0;
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
								break;
								case 2:
									id=0;
									for(i=0; i<sizeRow; i++)
									{
										for(p=0; p<sizeCol-1; p++)
										{
											for(j=0; j<sizeCol-1; j++)
											{
												if(a[id][j]<a[id][j+1]) 
												{
													save=a[id][j];
													a[id][j]=a[id][j+1];
													a[id][j+1]=save;
												}	
											}	
										}
										id++;
									}
								break;
								default:
									printf("Не верный ввод\n");
								break;	
							}
						break;
						case 2:
							printf("1.По возрастанию\n");
							printf("2.По убыванию\n");
							scanf("%d",&x1);
							switch(x1)
							{
								case 1:
									id=0;
									for(j=0; j<sizeCol; j++)
									{
										for(p=0; p<sizeRow-1; p++)
										{
											for(i=0; i<sizeRow-1; i++)
											{
												if(a[i][id]>a[i+1][id]) 
												{
													save=a[i][id];
													a[i][id]=a[i+1][id];
													a[i+1][id]=save;
												}	
											}	
										}
										id++;
									}
								break;
								case 2:
									id=0;
									save=0;
									k=0;
									for(j=0; j<sizeCol; j++)
									{
										for(p=0; p<sizeRow-1; p++)
										{
											for(i=0; i<sizeRow-1; i++)
											{
												if(a[i][id]<a[i+1][id]) 
												{
													save=a[i][id];
													a[i][id]=a[i+1][id];
													a[i+1][id]=save;
												}	
											}	
										}
										id++;
									}
								break;
								default:
									printf("Не верный ввод\n");
								break;	
							}
						break;
						case 3:
							printf("1.По возрастанию\n");
							printf("2.По убыванию\n");
							scanf("%d",&x1);
							switch(x1)
							{
								case 1:
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												c[q]=a[i][j];
												q++;
											}
										}
										///////////////////////////////////////////////Соритировка массива C 	
										for(j=0; j<q-1; j++)
										{
											for(i=0; i<q-1; i++)
											{
												if(c[i]>c[i+1])
												{
													gh=c[i];
													c[i]=c[i+1];
													c[i+1]=gh;	
												}
											}
										}
										/////////////////////////////////////// Возврат в 2-мерный масив 
										q=0;
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												g[i][j]=c[q];
												q++;	
											}
										}
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												a[i][j]=g[i][j];	
											}
										}
								break;
								case 2:
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												c[q]=a[i][j];
												q++;
											}
										}
										///////////////////////////////////////////////Соритировка массива C 	
										for(j=0; j<q-1; j++)
										{
											for(i=0; i<q-1; i++)
											{
												if(c[i]<c[i+1])
												{
													gh=c[i];
													c[i]=c[i+1];
													c[i+1]=gh;	
												}
											}
										}
										/////////////////////////////////////// Возврат в 2-мерный масив 
										q=0;
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												g[i][j]=c[q];
												q++;	
											}
										}
										for(i=0; i<sizeRow; i++)
										{
											for(j=0; j<sizeCol; j++)
											{
												a[i][j]=g[i][j];	
											}
										}	
								break;
								default:
									printf("Не верный ввод\n");
								break;	
							}
						break;
						default:
								printf("Не верный ввод\n");
						break;	
					}
			}
			else
			{
				printf("Матрица пуста , сначала заполните её\n");
			} 
		break;
		case 8:
			if(k==1)
			{
				printf("1.По номеру строки\n");
				printf("2.По номеру столбца\n");
				scanf("%d",&x4);
					switch(x4)
					{
						case 1:
								printf("Введите строку которую будем удалять: \n");
								scanf("%d",&y);
								y--;
								gg=0;
								for(i=0; i<sizeRow; i++)
								{
									if(i==y)
									{
										gg=1;	
									}
										for(j=0; j<sizeCol; j++)
										{
											if(gg==1)
											{
												a[i][j]=a[i+1][j];
											}	
										}	
								}
						sizeRow--;
						break;
						case 2:
								printf("Введите столбец , который будем удалять: \n");
								scanf("%d",&y);
								for(j=0; j<sizeCol; j++)	
								{		
									if(j==(y-1))
									{
										for(m=0; m<sizeRow; m++)
										{
											for(t=y-1; t<sizeCol; t++)	
											{
												a[m][t]=a[m][t+1];
											}
										}
									}		
								}		
								sizeCol--;
						break;
						default:
							printf("Не верный ввод\n");
						break;
							
					}
			}
			else
			{
				printf("Матрица пуста , сначала заполните её\n");
			}
		break;
		case 9:
			fl=1;
		break;
		default:
			printf("Не верный ввод\n");
		break;	
		}
	printf("Нажмите любую клавишу\n");
	getch();
	system("cls");	
	}while(fl==0);
	printf("Хорошего дня :)");
	return 0;
}


