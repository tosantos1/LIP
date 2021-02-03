#include <iostream>

using namespace std;
int opa(int a);
int main()
{
    int n;

    cin >> n;

    cout << opa(n);



    return 0;
}

int opa(int n){
    if(n == 1 || n == 0){
        return n;
    }else{
        return opa(n - 1) + opa (n-2);
    }

    return 0;
}
