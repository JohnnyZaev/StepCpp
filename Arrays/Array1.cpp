#include <iostream>
using namespace std;
//
//1. *Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев.
//Пользователь вводит прибыль фирмы за каждый месяц.
//
//2. *Написать программу, которая выводит одномерный массив в обратном порядке
//
//3. *Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в
//массив, необходимо вычислить периметр пятиугольника (периметр - сумма всех сторон).
//
//5. *В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы
//
//6. **Пользователь вводит прибыль фирмы за год (12 месяцев).
//Затем пользователь вводит диапазон (например, 3 и 6 - поиск между 3-м и 6-м месяцем).
//Необходимо определить месяц, в котором прибыль была максимальна и месяц,
//в котором прибыль была минимальна с учетом выбранного диапазона.

int main()
{
	//1
//	const int m = 6;
//	int arr[m];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> arr[i];
//	}
//	int result = 0;
//	for (int i = 0; i < m; i++)
//	{
//		result += arr[i];
//	}
//	cout << result;

	//2
//	const int l = 5;
//	int arr[l] = {1, 2, 3, 4, 5};
//	for (int i = l - 1; i > -1; i--)
//	{
//		cout << arr[i] << ' ';
//	}

	//3
// 	const int m = 5;
//	int arr[m];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> arr[i];
//	}
//	int result = 0;
//	for (int i = 0; i < m; i++)
//	{
//		result += arr[i];
//	}
//	cout << result;

	//5
//	const int l = 5;
//	int arr[l];
//	for (int i = 0; i < l; i++)
//	{
//		arr[i] = rand();
//	}
//	int min, max;
//	min = INT_MAX;
//	max = INT_MIN;
//	for (int i = 0; i < l; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	for (int i = 0; i < l; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl << min << " " << max;

	//6
//	const int m = 12;
//	int arr[m];
//	for (int i = 0; i < m; i++)
//	{
//		cin >> arr[i];
//	}
//	int min = INT_MAX, max = INT_MIN, down, top;
//	int minMonth, maxMonth;
//	cin >> down >> top;
//	for (int i = down - 1; i < top; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			maxMonth = i + 1;
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			minMonth = i + 1;
//		}
//	}
//	cout << maxMonth << " " << minMonth;
}