#include <iostream>

using namespace std;
bool primo(int a, int b);
int main()
{
    int a, b;
    bool primos;
    cin >> a >> b;
    primos = primo(a,b);
    if(primos){
        cout << "São primos entre si";
    }else{
        cout << "Não são primos entre si";
    }
    return 0;
}
bool primo(int a, int b){
int resto=0, cont=0, x=0, t=0;
for(int i= 0; resto!=0; i++){
     if(a%b==0){
     cont ++;
    }
    resto = a%b;
    a = b;
    b=resto;
    if(a>b){
     for(int i=1; i <=a;i++){
        x=a%i;
        if(a%i==0 && b%i==0){
            cont++;
        }
     }
    }else{
     for(int i=1; i <=b;i++){
        x=a%i;
        if(a%i==0 && b%i==0){
            cont++;
        }
     }
    }
}
if(cont==1){
    return true;
}else{
return false;
}
}
