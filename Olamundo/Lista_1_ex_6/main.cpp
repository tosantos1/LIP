#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float d, kml=12, dpl, qL;

    cin >> d >> qL;

    dpl = (d*qL)/(kml);

    cout << fixed << setprecision(2);
    cout << dpl << endl;

    return 0;
}
