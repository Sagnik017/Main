// Program to display given name in a Z pattern

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter name:";
    string name;
    cin >> name;
    cout << name << endl;
    int l = name.size();
    for (int i = l - 2; i > 0; i--)
    {
        for (int n = i; n > 0; n--)  {cout << ' ';}
        cout << name[i] << endl;
    }
    cout << name;

    return 0;
}
