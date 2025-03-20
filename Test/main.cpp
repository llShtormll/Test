#include<iostream>
#include <iomanip>
using namespace std;
#define FURR
//#define FURR_2

void main()
{
	setlocale(LC_ALL, "");
	int n; cout << "¬ведите число; "; cin >> n;
#ifdef FURR
	for (int i = 0; i <= n; i++)
	{
		if (i < n)for (int j = -1; j < i; j++) cout << "  ";
		else if (i == n)for (int j = 0; j <= n; j++) cout << "* ";
		for (int j = i; j < n; j++) cout << "* ";
		for (int j = 0; j < n - i; j++) cout << "  ";
		for (int j = n - i; j < n; j++) cout << "* ";
		cout << endl;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < n - i - 1; j++) cout << "* ";
		for (int j = n - i; j < n; j++) cout << "  ";
		cout << "  ";
		if (i != n)for (int j = -1; j < i; j++) cout << "* ";
		cout << endl;
	}
#endif // FURR
#ifdef FURR_2
	cout << endl;
	int t = 0;
	for (int i = 0; i < n; i++)
	{

		if (t <= 3)
		{
			t++;
			if (t == 1)
			{
				int k = 0;
				for (int j = 0; j < n; j++)
				{
					if (k <= 3)
					{
						k++;
						if (k == 1) cout << "+ ";
						else if (k == 2) cout << "- ";
						else cout << "= ";
					}
					if (k == 3) k = 0;

				}
			}
			else if (t == 2)
			{
				int k = 0;
				for (int j = 0; j < n; j++)
				{
					if (k <= 3)
					{
						k++;
						if (k == 1) cout << "- ";
						else if (k == 2) cout << "= ";
						else cout << "+ ";
					}
					if (k == 3) k = 0;

				}
			}
			else
			{

				for (int j = 0; j < n; j++)
				{
					int k = 0;
					if (k <= 3)
					{
						k++;
						if (k == 1) cout << "= ";
						else if (k == 2) cout << "+ ";
						else cout << "- ";
					}
					if (k == 3) k = 0;

				}
			}
		}
		if (t == 3) t = 0;
		cout << endl;
	}
#endif // FURR_2
}