#include<iostream>

using namespace std;

int main(void)
{
    int sum = 0;

    for (int n= 1; n<2000000; n++)
    {
        for (int i= 2; i<=n/2; i++)
        {
            if (n%i==0)
            {
                sum = sum + n;
            }
        }
        
    }
    cout << sum << endl;
    return EXIT_SUCCESS;
}