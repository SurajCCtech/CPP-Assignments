#include<iostream>

using namespace std;
int function()
{
    int n1= 1, n2 = 2, n3, sum = 2;

    while (n3 < 4000000)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        if (n3 % 2 == 0)
        {
            sum = sum + n3;
        }
    }
    return sum;
}
int main()
{
    int result = 0;
    result = function();
    cout << result << endl;
    return EXIT_SUCCESS;
}