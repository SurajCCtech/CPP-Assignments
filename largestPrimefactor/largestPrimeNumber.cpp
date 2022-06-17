#include <iostream>

using namespace std;

int factor(int num)
{
    for (int divisor = 1; divisor < num; divisor++)
    {
        if (num % divisor == 0)
            printf("%d",divisor);
    }
    return 0;
}

int main()
{
    int num;
    scanf("%d", &num);
    factor(num);
    return EXIT_SUCCESS;
}