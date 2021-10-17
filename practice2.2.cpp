#include <iostream>

using namespace std;

int main()
{
	int t, hour, min, sec;

	cout << "Enter the hour:" << endl;
	cin >> hour;
	cout << "Enter the min: " << endl;
	cin >> min;
	cout << "Enter the second:" << endl;
	cin >> sec;

	cout << "time: " << hour << ":" << min << ":" << sec << endl;

	hour = hour * 3600;
	min = min * 60;

	t = hour + min + sec;

	cout << "result: " << t << " second ";


	return 0;
}