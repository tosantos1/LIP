#include <iostream>

using namespace std;
void horas(int& h, int& m, int& s);
int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    horas(h,m,s);
    cout << "Restam: " << h << ":" << m  << ":" << s;
    return 0;
}
void horas(int& h, int& m, int& s){
if(h<=13){
    h=13-h;
    m=30-m;
if(s!=0){
    m=m-1;
    s=60-s;
}
}else{
if(m<30){
    m=30-m;
}
if(s!=0){
    m=m-1;
    s=60-s;
}
}
}

