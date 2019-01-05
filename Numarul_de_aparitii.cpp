#include "pch.h"
#include <iostream>
using namespace std;

int fr[101];

int main()
{
	int n, x;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		fr[x]++;
		if (x > 100) {
			cout << "Numarul introdus nu apartine intervalului [0,100]. Introduceti alt numar: ";
				i--;
		}
	}
	
	int max1 = 0, max2 = 0, max3 = 0, a = fr[0], b = fr[1], c = fr[2];
	for (int i = 0; i <= 100; i++) {
		if (fr[i] > max1) {
			max3 = max2;
			max2 = max1;
			max1 = fr[i];
			c = b;
			b = a;
			a = i;
		}
		else if (fr[i] > max2) {
			max3 = max2;
			max2 = fr[i];
			c = b;
			b = i;
		}
		else if (fr[i] > max3) {
			max3 = fr[i];
			c = i;
		}
	}
	cout << "Cele mai utilizate: " << a << ", " << b << ", " << c << endl;
	system("pause");
	return 0;
}
