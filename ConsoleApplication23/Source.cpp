#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int N;
	do
	{
		cout << "Ввести номер задания: " << endl;
		cin >> N;
		switch (N)
		{
		
		case 1:
		{
			int a[7][9], temp=0;
			int b[63] = { 0 },k=0;
			cout << "Двухмерный массив:" << endl;
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					a[i][j] = 1 + rand() % 60;
					cout << a[i][j] << "\t";
				}
				cout << endl;
							}
			cout << "Одномерный массив: " << endl;
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if ((a[i][j] >= 1)&&(a[i][j] <= 20))
					{
						b[k] = a[i][j];
						k++;
					}
				}
			}
			for (int i= 0; i < 25; i++)
			{
					cout << b[i] << "\t";
					}
			cout << endl;
			cout << "Сортировка по убыванию: " << endl;
			for (int i = 0; i < 25; i++)
			{
				for (int j = 24; j >=0; j--)
				{
					if (b[j] < b[j +1])
					{
						temp = b[j];
						b[j] = b[j+ 1];
						b[j + 1] = temp;
					}
				}

			}
			for (int i = 0; i < 25; i++)
			{
				cout << b[i] << "\t";
			}
			cout << endl;
		}
		break;
		case 2:
		{
			int a[30]={0} ,key,i,count=0;
			for ( i = 0; i <30; i++)
			{
					a[i] = 1 + rand() % 100;
					cout << a[i] << "\t";
				}
				cout << endl;
				cin >> key;
			for ( i = 0; i < 30; i++) 
			{
				if (a[i] == key)   
				{
					count++;
					cout <<"Место - "<< i <<" Сколько раз повторяется?- "<<count<< endl; 
					break;
					}
				}
			cout << "элемент не найден за " << i << " шагов" << endl;
		}
		break;
		case 3:
		{
			int a[20] = {0}, q;
			for (int  i = 0; i < 20; i++)
			{
				a[i] = -5 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			for (int  i = 0; i < 20; i++)
			{
				if( (a[i]!=0)&&(a[i]>0)&&((i+1)<20))
				{
					q = a[i+1] / a[i];
				cout << "Знаменатель геометрической прогрессии: " << q << "\t";
					cout << endl;
				}
			else
				{
				cout << "Не образуют" << endl;
				}
			}
		}
		break;
		case 4:
		{
			int a[5][4],c;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] = 1 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Отсартировать по убыванию элементов последнего столбца: " << endl;
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 4; k++)
				{
					for (int p = 3; p >0; p--)
					{
						if (a[p][j]>a[p-1][j])
						{
							c = a[p][j];
							a[p][j] = a[p - 1][j];
							a[p - 1][j] = c;
						}

					}

				}
			}
		for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}

		}
		break;
		case 5:
		{
			int a[3][4],temp=0, min=0;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] = 1 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
				}
			cout << "Поменять местами наименьшие элементы в строке: " << endl;
			for (int  i = 0; i <= 2; i++)
			{
				min = i;
				temp = a[0][0];
				for (int p = i+1; p <=2; p++)
				{
if (a[p][0] < min)
				{
					min = p;
				}
				}
				
				temp = a[i][0];      
					a[i][0] = a[min][0];
					a[min][0] = temp;
			}
		
			for (int i = 0; i <3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;
		case 6:
		{
			int a[5][6] = { {0},{0} }, sum = 0, min = 0, max = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					a[i][j] = 1 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			
				for (int j = 0; j < 6; j++)
				{
					if (a[0][j] > 0)
					{

						sum += a[0][j];
					}
					
				}
				cout << "Среднее арифметическое каждого столбца: "<<sum / 6 << endl;
				max = a[0][0];
				for ( int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 6; j++)
					{
                      if (a[i][j] > max)
					{
							max = a[i][j];
					}
					}
							}
				cout << "Максимальный элемент: " << max << endl;
				min = a[0][0];
				for ( int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 6; j++)
					{
if (a[i][j] < min)
					{
						min = a[i][j];
					}
					}
					
				}
				cout << "Минимальный элемент: " << min << endl;
		}
		break;
		case 7:
		{
			int a[8][9], kol = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					a[i][j] = 1 + rand() % 100;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if ((a[i][j]) % 2 == 0)
					{
						kol++;

					}
					

				}

			}
			cout << "Количество четных чисел - " << kol << endl;
			kol = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 9; j++)
				{

					if ((a[i][j]) % 1 == 0)
					{
						kol++;

					}
					

				}

			}
			cout << "Количество не четных чисел - " << kol << endl;
			}
		break;
		case 8:
		{
			int a[8][9], kol = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				a[i][j] = -5 + rand() % 100;
				cout << a[i][j] << "\t";
			}
			cout << endl;
		}
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if ((a[i][j]) == 7)
				{
					kol++;

				}
		}
		}
		cout << "Сколько раз встречается число 7 -  " << kol << endl;
	}
		break;
		case 9:
		{
			int a[5][5] = { { 0 } ,{ 0 } }, min = 0, count = 0, J[5] = {0};
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					a[i][j] =-1 + rand() % 50;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				count = 0;
				for (int j = 0; j < 5; j++)
				{
					for (short int k = 0; k < 5; k++)
					{
                        if ((a[i][j])==a[i][k])
					{
						count++;

					}
					}
					
				}
				J[i]= count - 5;
			}
			min = J[0];
			for (short int i = 0; i < 5; i++)
			{
				cout << "J[" << i << "]=" << J[i] << "\t";
		
				if (J[i] < min)
					{
						count = i;
						min = J[i];
					}
			}
		cout << endl;
			cout << " Минимальный элемент "<<min<< " расположен в строке " << count << endl;
		}
		break;
		default:
			break;
		}
	} while (N>0);















}