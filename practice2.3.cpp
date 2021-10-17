#include <iostream>

using namespace std;

int main()
{
	int t, hour, min, sec;

	cout << "Enter the number(second) : ";
	cin >> t;

	hour = t / 3600;
	t = t % 3600;
	min = t / 60;
	sec = t % 60;

	cout << hour << ":" << min << ":" << sec;

	return 0;
}