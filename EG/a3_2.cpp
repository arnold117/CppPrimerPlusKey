#include<iostream>
//define INT_MAX as largest int value
#include<climits>
//makes ZERO symbol for 0 value
#define ZERO 0

int main(void)
{
    using namespace std;
    //initialize a variable to max value
    short sam = SHRT_MAX;
    //OK if variable sam already defined
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << "Add $1 to each account." << endl << "Now ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now ";
    sam -= 1;
    sue--;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;

    system("Pause");
    return 0;
}