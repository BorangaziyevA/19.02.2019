#include <iostream>
#include <windows.h>
#include<iomanip>
#include<locale.h>

using namespace std;

void FillArray(int *p, int n)
{
	
	for (int i = 0; i < n; i++)
	{
		p[i] =-5 + rand() % 10;//ÈËÈ *(p+i) = 0 + rand() % 10;		
	}
}

void PrintArray(int *p, int n)
{

	for (size_t i = 0; i < n; i++)
	{
	
		cout << i <<"="<< p[i] << " ";//ÈËÈ cout << *(p+i) << " ";

		
	}
	cout << endl;
}

void PrintArray1(int *p, int n)
{

	for (size_t i = 0; i < n; i++)
	{
		if (p[i] >0)
		{
		cout << p[i] << " ";//ÈËÈ cout << *(p+i) << " ";

		}


	}
	cout << endl;
}

void Find(int *p, int n)
{
	int x;
	for (size_t i = 0; i < n; i++)
	{
		if (*(p+i) < 0)
		{
			cout << *(p + i) << " ";
			x = i;
			cout << x << endl;
		}

	}
}

void FindMin(int *p, int n)
{
	int Min = *p;

	for (size_t i = 0; i < n; i++)
	{
		if (Min > *(p+i))
		{
			Min = *(p + i);
		}

	}
	cout << endl << Min << endl;
}

void Sum(int *p, int n = 16)
{
	int B[8] = { 0 };
	int *a = B;

	for (size_t i = 0; i < n/2; i++)
	{
		*(a+i) = p[i] * p[i + 8];
		cout << *(a+i) << " ";
	}
	cout << endl;

	FindMin(a, n / 2);
}

void sort(int *p, int n)
{
	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 1; j < n; j++)
		{
			if (*(p+j) < *(p+j-1))
			{
				swap(*(p + j), *(p + j - 1));
			}

		}
		
	}
	PrintArray1(p, n);
}

void sort1(int *p, int n)
{
	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 1; j < n; j++)
		{
			if (*(p + j) > *(p + j - 1))
			{
				swap(*(p + j), *(p + j - 1));
			}

		}

	}
	PrintArray(p, n);
}

void Nechet(int *p, int n = 20)
{
	int B[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int *a = B;
	int x = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (i%2 == 1 && *(p+i) > 0)
		{
			a[x] = *(p + i);
			x++;
		}

	}

	sort(a, n/2);
}

void Nechet2(int *p, int n = 20)
{
	int B[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int *a = B;
	int x = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			a[x] = *(p + i);
			x++;
		}

	}

	sort(a, n / 2);
}

void chet(int *p, int n = 20)
{
	int B[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int *a = B;
	int x = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			a[x] = *(p + i);
			x++;
		}

	}

	sort1(a, n / 2);
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int flag;

	do
	{
		const int n = 20;
		int A[n] = { 0 };
		int *p = A;

		FillArray(p, n);
		PrintArray(p, n);
		Nechet(p);


		cout << "Continue?1/0";
		cin >> flag;

	} while (flag == 1);

}

/////////////3///////////////
//double a = 2.5, b = 5.2, res;
//double *p1 = &a, *p2 = &b;
//res = *p1 - *p2;
//cout << res;
////////////////2////////////
//int a = 2, b = 5;
//int *p1, *p2 = &b;
//
//p1 = &a;
//
//cout << *p1 - *p2;
//////////////////1//////////
//int a = 100, d = 10, x;
//int *p = &a, *p1 = &d;

//cout << p << endl;
//cout << *p << endl;

//cout << p1 << endl;
//cout << *p1 << endl;

//x = *p1 + *p;

//int *px = &x;

//cout << x << endl;
//cout << px << endl;
//cout << *px << endl;