#include <iostream>

using namespace std;

int main()
{
/*int x, y;
cin >> x;
 if(x>10)
       {
           y = x +3;
       }else {
            y = 3*x;
       }*/
int x, y;
cin >> x;
y = x > 10? x+3 : x*3;
cout << "y = " << y << endl;
           return 0;
}
