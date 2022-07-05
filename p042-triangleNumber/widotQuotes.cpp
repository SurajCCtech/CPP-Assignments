#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main()
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
        getline(file, line, '"'); // if (getline(file, line, '"'))
        // {
        //     cout << line;
        // }
    }

    vector<string> words;
    string temp;
    cout << "Hii1";
    while (words.size() != 0)
    {
        cout << "Hii2";
        words.push_back(line);
    }
    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;

    return EXIT_SUCCESS;
}

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

