#include<iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    //Cpp input
    cin >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    //The next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;

    cin.get();
    cin.get();
    return 0;
}