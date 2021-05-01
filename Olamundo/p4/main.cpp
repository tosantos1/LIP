#include <iostream>

using namespace std;
int sla (int n, int v[]) {
if (v[n] % 3 == 0 || v[n] % 5 == 0) {
return v[n];
}else{
return 0;
}
}
int main() {
int n;
cin >> n;
int v[n];
for ( int i = 0; i<n; i++){
 cin >> v[i];
}
for ( int i = 0; i< n; i++){
if (sla(i,v) != 0){
cout << sla(i,v) << " ";
}
}
return 0;
}

}
