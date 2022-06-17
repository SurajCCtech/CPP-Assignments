#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream Myfile;
    string story;
    cout << "Enter a story: \n";
    getline(cin, story);

    char story_char[999];
    for (int i = 0; i < story.length(); i++)
    {
        story_char[i] = story[i];
    }

    // Ciphering the story and writing it into the file.

    Myfile.open("story.txt", ios::out);
    if (Myfile.is_open())
    {
        for (int i = 0; i < story.length(); i++)
        {
            Myfile << int(story_char[i]);
        }
    }
    Myfile.close();

    // De-ciphering the numbers into story.....
    cout << "The deciphered numbers form the story:\n ";
    Myfile.open("story.txt", ios::in);
    if (Myfile.is_open())
    {
        string line;
        while (getline(Myfile, line)) {
            int num = 0;
            for (int i = 0; i < line.length(); i++) {
                num = num * 10 + (line[i] - '0');
                if (num >= 32 && num <= 122) {
                    char ch = (char)num;
                    cout << ch;
                    num = 0;
                }
            }
        }
    }
    Myfile.close();

    return 0;
}