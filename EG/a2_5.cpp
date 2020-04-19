//defining your own function

#include<iostream>

//function prototype for simon()
void simon(int);

int main()
{
    using namespace std;

    //call the simon() function
    simon(3);
    cout << "Pick an integer: ";

    int count;

    cin >> count;
    //call it again
    simon(count);
    cout << "Done!" << endl;

    cin.get();
    cin.get();
    return 0;
}

//define the simon() function
void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}
//void function don't need return statements