#include <iostream>

using namespace std;

class Dmart
{
    int ItemId[10];
    string ItemNmae[10];
    float ItemPrice[10];
    int counter;

    public:
    void setItem();
    void showItem();

    void CounterInitialise()
    {
        counter = 0;
    }
};
void Dmart::setItem()
{
    cout << "Enter Item id : " << endl;
    cin >> ItemId[counter];
    cout << "Enter Item name : " << endl;
    cin >> ItemNmae[counter];
    cout << "Enter Item price :" << endl;
    cin >> ItemPrice[counter];
    counter ++;
}

void Dmart:: showItem()
{
    for (int i=0; i<counter; i++)
    {
        cout << ItemNmae[i] << " has a item Id " << ItemId[i] << " & has price " << ItemPrice[i] << endl; 
    }
}
int main()
{
    Dmart item;
    item.CounterInitialise();
    item.setItem();
    item.showItem();
    return EXIT_SUCCESS;
}