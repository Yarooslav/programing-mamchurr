#define N 3//указал размер массива 
#define M 3//указал размер массива 
	void   sum(int values[],int size)
	{
    for(int i = 0; i < size; i++)//создал цикл. проход по строчке
           for(int j = 0; j < size; j++)//проход по столбцам 
                {
                for(int k = 0; k < size; k++)//умножения матрицы

	values[i * size + j] += (values[i * size + k] * values[k * size + j]);

		}
	}

	int fact(int num)
{
    int f=1;
    if(num%2==0)
    {
       for(int i=2; i<=num; i+=2)
       {
           f*=i;
       }
    }
    else
    {
        for(int i=1; i<=num; i+=2)
       {
           f*=i;
       }
    }return f;

}
	int main ()
	{
	int n = (rand() % 49) + 1;
	int r;
	int values[N][M] = { { 11, 12, 13 },{ 21, 22, 23},{ 31, 32, 33 } };
	sum((int*) values, N * M);
	r=fact(n);
	return 0;
	}


