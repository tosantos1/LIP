#include <iostream>

using namespace std;

int main()
{
    int x,y=20;
    cin>> x;
    for(int i=0;i<x;i++){
        cout << y << " ";
        y=y-6;
    }
    return 0;
}
