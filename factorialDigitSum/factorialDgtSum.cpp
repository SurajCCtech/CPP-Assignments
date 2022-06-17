#include <iostream>
#include <map>

using namespace std;

unsigned long long int factorial(unsigned int n)
{
    unsigned long long int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
   
    unsigned long long int sum = 0;

    while (res != 0)
    {
        sum = sum + res % 10;
        res = res / 10;
    }
    return sum;
}

int main()
{
    int num = 50;

    cout << factorial(num) << endl;
    return 0;
}