#include <iostream>

using namespace std;

double binpow (double a, int n)
{
    if (n < 0)
        return 1 / binpow(a, -n);

    if (n == 0)
        return 1;

    if (n == 1)
        return a;

    if (n % 2 == 0)
    {
        double b =  binpow(a, n/2);
        return b * b;
    }

    return (a * binpow(a, (n-1)));
}


int main()
{
    double a;
    int n;
    cin >> a;
    cin >> n;
    cout << binpow (a, n);
}
