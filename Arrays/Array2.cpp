#include <iostream>
using namespace std;

//19. *Напишите программу, которая выполняет поэлементную сумму
//		двух массивов и результат заносит в третий массив.
//
//17. ***Написать программу, копирующую последовательно элементы 2-х массивов
//размером 5 элементов каждый в один массив размером 10 элементов.
//
//14. ***Написать программу, копирующую элементы 2-х массивов размером 5 элементов
//		каждый в один массив размером 10 элементов  следующим образом:
//- сначала копируются последовательно все элементы, большие 0,
//- затем последовательно все элементы, равные 0,
//- а затем последовательно все элементы, меньшие 0.
//
//8. ***Сжать (сдвинуть элементы) массив, удалив из него все 0, и заполнить
//освободившиеся справа элементы значениями -1;
//
//7. **В одномерном массиве, состоящем из N вещественных чисел вычислить:
//- Сумму отрицательных элементов.
//- Произведение элементов, находящихся между min и max элементами.
//- Произведение элементов с четными номерами.
//- Сумму элементов, находящихся между первым и последним
//отрицательными элементами.
//
//
//15. *Написать программу, которая заполняет одномерный массив из 10 элементов
//		вещественными числами в диапазоне от 1 до 10 с двумя знаками после запятой.
//а)**количество знаков после запятой вводит пользователь.
//
//18. ***Написать программу, которая осуществляет разбиение введенного числа на
//		цифры и заносит эти цифры в массив. Вывести элементы массива, разделяя их
//двумя пробелами.

int main()
{
	//19
//	const int n = 5;
//	int a[n] = {1, 2, 3, 4, 5};
//	int b[n] = {5, 4, 3, 2, 1};
//	int c[n];
//	for (int i = 0; i < n; i++)
//	{
//		c[i] = a[i] + b[i];
//		cout << c[i] << ' ';
//	}

	//17
//	const int n = 5;
//	int a[n] = {1, 2, 3, 4, 5};
//	int b[n] = {5, 4, 3, 2, 1};
//	int c[n * 2];
//	int j = 0;
//	for (int i = 0; i < n; i++, j++)
//	{
//		c[j] = a[i];
//		cout << c[j] << ' ';
//	}
//	for (int i = 0; i < n; i++, j++)
//	{
//		c[j] = b[i];
//		cout << c[j] << ' ';
//	}

	//14
//	const int n = 5;
//	int a[n] = {1, -2, 3, -4, 5};
//	int b[n] = {5, 0, 3, 1, -1};
//	int c[n * 2];
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > 0)
//		{
//			c[j] = a[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] > 0)
//		{
//			c[j] = b[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == 0)
//		{
//			c[j] = a[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] == 0)
//		{
//			c[j] = b[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < 0)
//		{
//			c[j] = a[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] < 0)
//		{
//			c[j] = b[i];
//			j++;
//		}
//	}
//	for (int i = 0; i < n * 2; i++)
//	{
//		cout << c[i] << " ";
//	}

	//8
//	const int n = 5;
//	int a[n] = {0, 1, 0, 2, 0};
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == 0)
//		{
//			for (int j = i; j < n - 1; j++)
//			{
//				int temp = a[j + 1];
//				a[j + 1] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] != 0)
//			count++;
//	}
//	for (int i = count; i < n; i++)
//	{
//		a[i] = -1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i];
//	}

	//7
//	int n;
//	cin >> n;
//	int arr[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand();
//		cout << arr[i] << ' ';
//	}
//
//	int result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < 0)
//			result += arr[i];
//	}
//	for (int i = 0; i < n; i += 2)
//	{
//		result += arr[i];
//	}
//	cout << result;
}