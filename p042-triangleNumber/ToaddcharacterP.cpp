#include <iostream>
#include <string>

using namespace std;

int main()
{
    char alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    string str("ABILITY");
    int sum = 0;
    for (string::iterator it = str.begin(); it != str.end(); ++it)
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
    return 0;
}