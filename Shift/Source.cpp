#include <iostream>
#include<Windows.h>
using namespace std;
#define tab "\t"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < n; i++)cout << arr[i] << tab; 
	cout << endl; 
	int shift;
	cout << "Введите коэффициент смещения:"; cin >> shift;
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++) arr[i] = arr[i + 1];
		arr[n - 1] = buffer;
	system("CLS"); 
	for (int i = 0; i < n; i++) cout << arr[i] << tab;
	}
	cout << endl; 
	Sleep(1000);
}