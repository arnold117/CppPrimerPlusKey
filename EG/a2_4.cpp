//using the sqrt() function

#include<iostream>
//or math .h
#include<cmath>

int main()
{
    using namespace std;

    double area;

    cout << "Enter the floor area, in suqare feet, of your home: ";
    cin >> area;

    double side;

    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side. " << endl;
    cout << "How fascinating!" << endl;

    cin.get();
    cin.get();
    return 0;
}