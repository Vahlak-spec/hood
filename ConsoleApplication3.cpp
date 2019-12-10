#include "time.h"
#include "windows.h"
#include "iostream"
#include "iomanip"


using namespace std;
void scan(int A[16]);
void pos(int G[16]);

int main()
{
	const int n = 16;
	int C[n];
	scan(C);
	pos(C);
	neg(C);
	system("pause");
	return 0;
}

void scan(int A[16])
{
	for (int i = 0; i < 16; i++)
		cin >> A[i];
}
void pos(int A[16])
{
	int x = 0;
	for (int i = 0; i < 16; i++)
		if (A[i] > 0)
		{
			x = x++;
		}
	cout << "Pos = " << x;
	int P[16];
	for (int i = 0; i < x; i++)
	{
		if (A[i] > 0)
		{
			P[x] = A[i];
		}
		cout << P[x];
	}
}
void neg(int A[16])
{
	int k = 0;
	for (int i = 0; i < 16; i++)
		if (A[i] < 0)
		{
			k = k++;
		}
	cout << "Neg = " << k;
	int N[16];
	for (int i = 0; i < k; i++)
	{
		if (A[i] < 0)
		{
			N[k] = A[i];
		}
		cout << N[k];
	}
}