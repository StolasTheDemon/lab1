#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
 
				// прототипы функций

void vorm_vector(int nn, int vector_max, int vector_min, int vector[nn]);

int main()
{
	int i, j, n, vector_max2, vector_min2, pro_chet, pro_nechet, nomer_chet, nomer_nechet, dva, min_element;
									
	printf("\nВведите нижнюю границу диапазона:");
	scanf("%d", &vector_min2);
	printf("\nВведите верхнюю границу диапазона:");
	scanf("%d", &vector_max2);
	printf("\nВведите размер вектора:");
	scanf("%d", &n);
	
	int vector[n];
	
	dva=2;
	nomer_chet = 0;
	nomer_nechet = 0;
	pro_chet = 0;
	pro_nechet = 0;
	
	printf("\nИсходный вектор:\n");

   vorm_vector(n, vector_max2, vector_min2, vector);

	for (i=0; i<n; i++)
	{		
      printf("%5d", vector[i]);		
	}
	
	for (i=0; i<=n; i++)
	{
	    if (vector[i] % dva == 0)
	    {
	      ++pro_chet;  
	    }
	    if (pro_chet == 2)
	    {
	        nomer_chet = i;
	        printf ("\n Номер второго чётного элемента: %d", nomer_chet);
	        break;
	    }
	}
	
	for (i=n-1; i>=0; i--)
	{
	    if ((vector[i] % dva  == 1) || (vector[i] % dva == -1))
	    {
	      ++pro_nechet;  
	    }
	    if (pro_nechet == 2)
	    {
	        nomer_nechet = i;
	        printf ("\n Номер предпоследнего нечётного элемента: %d", nomer_nechet);
	        break;
	    }
	}
	if ((pro_nechet == 0) || (pro_nechet == 1) || (pro_chet == 0) || (pro_chet == 1))
{
    printf("\n Неккоректный массив");
    goto stop;
}
    if (nomer_nechet - nomer_chet == 1) 
    {
    printf("\n Между вторым чётным и предпоследним нечётным элементами нет других элементов");
    goto stop;
    }
	min_element = min_vector(n, vector, nomer_chet, nomer_nechet);
	printf ("\n Минимальный элемент между вторым четным и предпоследним нечётным элементами этого вектора: %d", min_element);
	
stop: return 0;
}
					//описание функций

					// 1. формирование вектора
void vorm_vector(int nn, int vector_max, int vector_min, int vector[nn])
{
	int i, j, m;
	time_t t;		// текущее время для инициализации 
					// генератора случайных чисел
					
	srand((unsigned) time(&t));	// инициализация генератора
								// случайных чисел
	
	m = vector_max-vector_min + 1;
	
		// получение случайного числа в диапазоне
		// от vector_min  до  vector_max
		
	for (i=0; i<nn; i++)		
			vector[i]=rand()% m + vector_min;		
} 
int min_vector (int nn, int vector [nn],int n_chet,int n_nechet)
{
    int i, i_min;
    i_min = vector [n_chet+1];
    for (i=n_chet+1; i<n_nechet; i++)
    {
        if (i_min>vector[i])
        {
            i_min = vector [i];
        }
    }
    return i_min;
    
}

