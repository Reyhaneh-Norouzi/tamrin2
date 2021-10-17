
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Please enter n : " << endl;

    while (n != 'exit')
    {
        cin >> n;
        sum += n;
    }
    cout << "sum = " << sum << endl;

    getch();
}