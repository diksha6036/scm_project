// ************     For Loop in c++:   ****************
// understanding basic looping


#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "enter the number upto which you want to print the numbers ";
    cin >> n;
    for (i = 1; i <= n; i++)//looping
    {
        cout << i << endl;
    }
    return 0;
}
