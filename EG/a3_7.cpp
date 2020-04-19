// bondini.cpp -- using escape sequences

#include<iostream>

int main()
{
    using namespace std;

    cout << "\aOperation \" HyperHype\" is now activated\n";
    cout << "Enter your agent code:__________\b\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "You entered " << code << "...\n";
    cout << "\aCode Verified! Proceed with Plan 23!\n";
    return 0;
}