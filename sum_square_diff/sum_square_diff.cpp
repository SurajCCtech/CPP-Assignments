#include <iostream>

using namespace std;

int squareOfNumber()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i * i;
    }
    return sum;
}

int squareOfSum()
{
    int n = 100;
    int square;

    square = ((n * (n + 1)) / 2) * ((n * (n + 1)) / 2);
    return square;
}

int main()
{
    int Result = 0;

    Result = squareOfSum() - squareOfNumber();
    cout << Result << endl;
    return EXIT_SUCCESS;
}