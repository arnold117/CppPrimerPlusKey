// FLTADD.CPP -- precision problems with float
#include<iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    std::cout << "b - a =" << b - a << std::endl;
    
    return 0;
}
