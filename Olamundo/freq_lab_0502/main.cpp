#include <iostream>

using namespace std;
int paw(int x, int y);
int main (){
int x, y;
cin >> x >> y;
cout << paw(x,y);
return 0;
}

int paw ( int x, int y){

int i;

int a;

if(y== 0 && x!=0){

return 1;
}
else if(y>=0){

a=1;

for( i=0 ; i<=y-1 ; i++){

a = x*a;
}
}
return a;

}
