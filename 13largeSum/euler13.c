#include <stdio.h>
//#include <cstdio>

int main()
{
    char c;
    int I = 0, J = 0;
    int array[100][50];
    FILE *fp = fopen("euler13.txt", "r");

    // Load array with numbers
    while (c = fgetc(fp) != EOF)
    {
        // Not newline
        if (c != 0x0A)
            array[I][J++] = c - '0';
        else
        {
            // Is a newline, skip character and get next row of numbers
            I++;
            J = 0;
        }
    }
    
}