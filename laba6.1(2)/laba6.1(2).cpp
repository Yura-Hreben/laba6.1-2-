#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
    return 0;
}
int Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
    return 0;
}
int Sum(int* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] > 0 && a[i] % 2 == 0)
            return a[i] + Sum(a, size, i + 1);
        else
            return Sum(a, size, i + 1);
    }
    else
        return 0;
}
int number(int* a, const int size, int i, const int Low, const int High)
{
    int n = 25;
    Create(a, n, Low, High);
    int count = 0;

    for (int i = 0; i < n; i++)
        if (a[i] > 0 && a[i] % 2 == 0)
            count++;
    cout << "count = " << count << endl;
    return 0;

}
double foo(int size, int a[], int i)
{
    if (i < size)
    {
        if (a[i] > 0 && a[i] % 2 == 0)
        {
            cout << 0 << ' ';
            return foo(size, a, i + 1);
        }
        else
            cout << a[i] << " ";
        return foo(size, a, i + 1);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 25;
    int i = 0;
    int a[n];
    int Low = -20;
    int High = 30;
    Create(a, n, Low, High);
    Print(a, n);
    cout << "S = " << Sum(a, n, i) << endl;
    number(a, n, i, Low, High);
    foo(n, a, i);
    return 0;
}