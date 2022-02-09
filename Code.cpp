#include<iostream>
#include<windows.h>

using namespace std;
void main()
{
    int w8 = 150;//set delay b/w outputs in milli seconds
here:
    cout << "-";
    Sleep(w8);
    system("CLS");
    cout << "\\";
    Sleep(w8);
    system("CLS");
    cout << "|";
    Sleep(w8);
    system("CLS");
    cout << "/";
    Sleep(w8);
    system("CLS");
    goto here;
}
