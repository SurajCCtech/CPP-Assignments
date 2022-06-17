#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void SieveOfSundaram(bool marked[], int);
int Rotate(int);
int countDigits(int);

void circularPrime(int n)
{
    int nNew = (n - 2) / 2;
    bool marked[nNew + 1];

    memset(marked, false, sizeof(marked));
    SieveOfSundaram(marked, nNew);
    cout << "2 ";

    for (int i = 1; i <= nNew; i++)
    {
        if (marked[i] == true)
            continue;

        int num = 2 * i + 1;
        num = Rotate(num);

        while (num != 2 * i + 1)
        {
            if (num % 2 == 0)
                break;

            if (marked[(num - 1) / 2] == false)
                num = Rotate(num);
            else
                break;
        }

        if (num == (2 * i + 1))
            cout << num << " ";
    }
}

void SieveOfSundaram(bool marked[], int nNew)
{
    for (int i = 1; i <= nNew; i++)
        for (int j = i; (i + j + 2 * i * j) <= nNew; j++)
            marked[i + j + 2 * i * j] = true;
}

int Rotate(int n)
{
    int rem = n % 10;
    rem *= pow(10, countDigits(n));

    n /= 10;
    n += rem;
    return n;
}

int countDigits(int n)
{
    int digit = 0;
    while (n /= 10)
        digit++;
    return digit;
}

int main(void)
{
    int n = 1000;
    circularPrime(n);
    return 0;
}