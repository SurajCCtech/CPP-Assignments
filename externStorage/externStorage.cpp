#include <iostream>

using namespace std;

int first= 10, last= 20;

int main()
{
    extern int first, last;  
    cout << first << last << endl;

    return EXIT_SUCCESS;
}

//Without using the extern in line 9 while declaring the variable
//it will print the garbage values, extern help to link the globally defined 
// variables in the main and print the defined values