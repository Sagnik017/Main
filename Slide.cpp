// Program to display name in a sliding Z pattern

#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main()
{
    string name;
    cout << "Enter name:";
    cin >> name;
    int l = name.length();
    int n = l;
    while (1)
    {
        for (int i = l - 1; i > -1; i--)
        {
            Sleep(300);
            system("CLS");
            for (int j = i; j < l; j++)
            {
                cout << name[j];
            }
        }
        for (int i = l; i > 0; i--)
        {
            Sleep(300);
            system("CLS");
            for (int j = l; j >= i; j--)
            {
                for (int k = j - 1; k > 0; k--)  {cout << " ";}
                cout << name[j - i] << endl;
            }
        }
        for (int i = l - 1; i > -1; i--)
        {
            Sleep(300);
            system("CLS");
            for (int k = l - 1; k > 0; k--)  {cout << endl;}
            for (int j = i; j < l; j++)  {cout << name[j];}
        }
    }
    return 0;
}
