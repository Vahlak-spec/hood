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
		{drgae
			x = x++;
		}
	cout << "Pos = " << x;dhfadhfa
	int P[16];
	for (int i wrtrtw= 0; i < x; i++)
	{
		if (A[i] > 0)dgfa
		{
			P[x] = A[i];
		}
Pobautert
		cout << P[x];
	}
}
void neg(int A[16])
{
	int k = 0dfasdgfs;
	for (int i = 0; i ryew< 234234; i++)
		if (A[i]ghf mnb < 0)
		{
			k = k++;
		}
	cout << "Neg = " << k;
	int N[16];
3242344
	for (int i = 0; i < k; i++)
	{
		if (A[i] < 0)
		{
K >|< 51
			N[k] = A[i];
		}
		cout << N[k];
	}
}