int main() {
#define N 3//указал размер массива 
#define M 3//указал размер массива 

 int values[N][M] = { { 11, 12, 13 },//создал двухмерный массив ,задал его>
                           { 21, 22, 23 },
                           { 31, 32, 33 } };
        int values_1[N][M];//создал вторую  матрицу она пустая  ,тут будт ответ

}


int  sum (int values[N][M], int values_1[N][M])
 {

    for(int i = 0; i < N; i++)//создал цикл. чтобы потом можно было помножить н>
           for(int j = 0; j < M; j++)//выше также 
                {
                 values_1[i][j] = 0;// матрица нулевая
                for(int k = 0; k < N; k++)//выше также
        values_1[i][j] = values_1[i][j] + values[i][k] * values[k][j] ;//тут мы>
return values_1[i][j];        }
return 0;
}

