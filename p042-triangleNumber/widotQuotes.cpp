#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string alpha[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

int main()
{
    int i;
    int sum=0;
    fstream file;
    file.open("Student.txt", ios::in);

    string line;
    while (getline(file, line, '"'))
    {
        stringstream ss(line);
        while (getline(ss, line, ','))
        {
            cout << line << endl;
        }
        if (getline(file, line, '"'))
        {
            cout << line;
        }
        for (i = 0; i < 26; i++)
    {
        if (line == alpha[i])
        {
            sum+=i;
        }
        cout << sum <<endl;
    }
    }
    
}