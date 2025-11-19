

#include <iostream>
using namespace std;

int main()
{

    int number = 10;
    cout << "outer block number = " << number << endl;

    {

        int number = 20;
        cout << "Inner block 1 number = " << number << endl;


    }
    {
        int number = 30;

        cout << "inner block 2 number = " << number << endl;


    }

    cout << "Back to outer block number = " << number << endl;

    return 0;
}

