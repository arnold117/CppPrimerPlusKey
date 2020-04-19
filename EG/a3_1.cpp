//some integer limits

#include<iostream>
#include<climits>

int main()
{
    using namespace std;
    //initialize n_int to max int value
    int n_int = INT_MAX;
    //symbols defined in climts file
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //size operation yields size of type or of variable
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong <<endl << endl;

    cout << "Minimm int value = " << INT_MIN << endl;
    cout << "Bits per byte: " << CHAR_BIT << endl;

    system("Pause");
    return 0;
}