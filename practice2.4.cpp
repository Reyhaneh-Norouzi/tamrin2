#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	float mark, ave, max, sum = 0.0;
	int n;

	cout << "tedad daneshjuyan ra vared konid: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{

		cout << "nomre ra vared konid: ";
		cin >> mark;
		max = mark;

		sum += mark;
		ave = sum / n;


		if (mark > max)
			max = mark;

	}

	cout << "ave: " << '\t' << ave << '\t';
	cout << "Max: " << '\t' << max << '\t';


	return 0;
}