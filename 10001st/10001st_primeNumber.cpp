#include <iostream>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int NthPrime()
{
    int prime = 2;
    int i = 1;
    while (i < 10001)
    {
        do
        {
            prime++;
        } while (!isPrime(prime));
        i++;
    }
    cout << prime << endl;
    return EXIT_SUCCESS;
}

int main(void)
{
    NthPrime();
    return EXIT_SUCCESS;
}