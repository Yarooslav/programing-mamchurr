#include <stdio.h>
//задача 14
int main()
{
	int  number = 122;
	int num1 = number / 100 % 10;
 	int num2 = number / 10 % 10;
 	int num3 = number % 10;

if (num1 == num2 || num2 == num3 || num3 == num1) string a= "Одинаковых цифр есть";
else string b = "Одинаковых цифр нет";


return 0;
}
