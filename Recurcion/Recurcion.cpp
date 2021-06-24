#include <iostream> 
using namespace std;

unsigned long int fib(unsigned long int n)
{
	if (n == 1 || n == 2) return 1;
	if (n == 0) return 0;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	setlocale(LC_ALL, "RU");
	int a;
	cout << "Введите кол-во циклов" << endl;
	cin >> a;
	for (int i = 0; i < a; i++)
		cout << fib(i) << "" << endl;
	cout << "Ваш результат";
	system("pause");
	return 0;
}
