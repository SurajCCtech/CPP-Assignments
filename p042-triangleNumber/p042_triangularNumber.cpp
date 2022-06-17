#include <iostream>
#include <fstream>
#define MAX 200

using namespace std;

int main()
{
    char S1, S2;
    ifstream file("p042_words.txt");
    file.ignore(EOF,'"');
    S2=file.get();

    cout << S2 << endl;



    file.close();
    return EXIT_SUCCESS;
}