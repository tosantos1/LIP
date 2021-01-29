#include <iostream>

using namespace std;

int main() {
    int d1, m1, a1, d2, m2, a2;
    cin >> d1 >> m1 >> a1 >> d2 >> m2 >> a2;
    if(a1==a2 && m1==m2 && d1==d2){
            cout << "As datas sao iguais" << endl;
    }else if(a1 == a2 && m1 == m2 && d1 > d2){
            cout <<"A segunda data e mais antiga" << endl;
    }else if(a1 == a2 && m1 == m2 && d1 < d2){
            cout << "A primeira data e mais antiga" << endl;
    }else if(a1==a2 && m1>m2){
            cout <<"A segunda data e mais antiga" << endl;
    }else if(a1==a2 && m1<m2){
            cout << "A primeira data e mais antiga" << endl;
    }else if(a1>a2){
            cout <<"A segunda data e mais antiga" << endl;
    }else{
            cout << "A primeira data e mais antiga" << endl;
    }


    return 0;
}
