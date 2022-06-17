#include<iostream>

using namespace std;

int main()
{
    for (int i= 1; i<=5; i++)
    {
        for (int space = 1; space<= i-1; space++)
        {
            cout << " " ;
        }
        for (int j= 5; j>=i; j--)
        {
            cout << "* ";
        }
        cout <<"\n";
    }
    return EXIT_SUCCESS;
}