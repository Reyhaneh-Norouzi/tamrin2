#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int a;

    srand(time(0));
    a = rand() % 6 + 1;

    cout << a << '\n';

    if (a == 6)
    {
        cout << "again" << '\n';
        cout << rand() % 6 + 1 << '\n';
    }

    return 0;
}