#define N 3//указал размер массива 
#define M 3//указал размер массива 


	int sum(int values1[N][M])
	{
	int values_12[N][M];
    for(int i = 0; i < N; i++)//создал цикл. чтобы потом можно было помножить н>
           for(int j = 0; j < M; j++)//выше также 
                {
                 values_12[i][j] = 0;// матрица нулевая
                for(int k = 0; k < N; k++)//выше также
        values_12[i][j] = values_12[i][j] + values1[i][k] * values1[k][j] ;//тут мы>
	  return values_12[i][j];
	}
	return values_12[i][j];
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
	int n=9;
	int r;
	int m;
	int values[N][M] = { { 11, 12, 13 },//создал двухмерный массив ,задал е>
                           { 21, 22, 23 },
                           { 31, 32, 33 } };
        int values_1[N][M];//создал вторую  матрицу она пустая  ,тут будт ответ

//	sum(values[N][M]);
	r=fact(n);
//	m=sum(values[N][M]);
	return 0;
}


