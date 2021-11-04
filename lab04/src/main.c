#include <stdio.h>
//задача 14
int main()
{
	int  number = 123;
	int num1 = number / 100 % 10;
 	int num2 = number / 10 % 10;
 	int num3 = number % 10;
	int res= 0;
if (num1 == num2 || num2 == num3 || num3 == num1)
{
res ++;// если  1 тогда есть одинаковые цифры 
}
else 
{
res--;// если -1 тогда нету одинаковых цифр 
}
return 0;
}
