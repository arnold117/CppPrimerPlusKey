// divide.cpp -- integer and floating-point division

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division : 9/5 = " << 9/5 << endl;
    cout << "Floating-Point division : 9.0 / 5.0 = ";
    cout << 9.0 /5.0 << endl;
    cout << "Mixed division: 9.0 /5 = " << 9.0/5 << endl;
    cout << "Double constants: 1e7/9.0 = " << 1e7/9.0 << endl;
    cout << "Float constants : 1e7f/9.0f = " << 1e7f/9.0f << endl;
    
    return 0;
}
