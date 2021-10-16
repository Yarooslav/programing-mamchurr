//задание номер 16

int main()
{
	int n = 123;
	int d1 = n % 10;
	int d2 = n / 10 % 10;
	int d3 = n / 100 % 10;
	int res = d1 * 100 + d2 * 10 + d3;
	return 0;
}
