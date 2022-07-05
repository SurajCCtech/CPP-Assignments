#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

char alpha[] =  {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
void toVector();
int main()
{
    toVector();
    return EXIT_SUCCESS;
}
string removePunctuation()
{
    fstream file;
    file.open("Student.txt", ios::in);
    string line;
    while (getline(file, line, '"'))
    {
        stringstream ss(line);
        getline(ss, line, ','); // while (getline(ss, line, ','))
        // {
        //     cout << line << endl;
        // }
        getline(file, line, '"');// if (getline(file, line, '"'))
        // {
        //     cout << line;
        // }
    }
    return line;
}

void toVector()
{

    vector<string> words;
    string temp;
    string word1 = removePunctuation();
    cout << "Hii1";
    while (!word1.empty())
    {
        words.push_back(word1);
    }
    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;
    
  
  
  /* int sum = 0;
    for (string::iterator it = word1.begin(); it != word1.end(); ++it)
    {
        //cout << *it << endl;
        for (int i = 0; i < 26; i++)
        {
            if (*it == alpha[i])
            {
                char ch = alpha[i];
                sum += ch - 'A' + 1;
            }
        }
    }
    cout << "Sum of places= "<< sum << endl;

    */
}


