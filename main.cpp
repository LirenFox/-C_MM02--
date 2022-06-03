#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int base, height;
    cin >> base >> height;
    cout<< fixed << setprecision(1)<< (base*height)/2.0 << endl;
    return 0;
}
