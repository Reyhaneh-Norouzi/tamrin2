#include <iostream>

using namespace std;

int main() {
	int n, f;
	int f1 = 1;
	int f2 = 1;

	cout << "Enter n: ";
	cin >> n;

	if (n > 2)
	{
		cout << f1 << '\t' << f2 << '\t';
		for (int i = 3; i <= n; i++)
		{
			f = f1 + f2;
			cout << f << '\t';
			f1 = f2;
			f2 = f;
		}
	}
	return 0;
}