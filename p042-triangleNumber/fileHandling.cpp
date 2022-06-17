#include <fstream>
#include <iostream>

using namespace std;

class student
{
    char id;
    char name[20];
    int roll_number;

public:
    void getStu()
    {
        cout << "Enter student id, name, roll number- " << endl;
        cin >> id >> name >> roll_number;
    }
    void putStu()
    {
        cout << id << "\t" << name << "\t" << roll_number << endl;
    }
};

int main()
{
    student stuObj;
    ofstream file;
    file.open("Student.dat");
    char op;
    /*
    {
        stuObj.getStu();
        file.write((char *)&stuObj, sizeof(stuObj));
        cout << "One row created." << endl;
        cout << "Anymore student?" << endl;
        cin >> op;
    } while (op == 'Y' || op == 'y');
    */
    ifstream file1;
    file1.open("Student.dat");
    file1.read((char *)&stuObj, sizeof(stuObj));
    cout << "Id"
         << "\t"
         << "Name"
         << "\t"
         << "Roll number" << endl;
    cout << "__________________________________" << endl;
    while (!file1.eof())
    {
        stuObj.putStu();
        file1.read((char *)&stuObj, sizeof(stuObj));
    }
    file1.close();
    return EXIT_SUCCESS;
}
