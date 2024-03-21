#include <iostream>

using namespace std;

int main() {
float a,b,c=0;

cout<<"Ingrese 3 numeros"<< endl;
cin>>a>>b>>c;

if ((a>b) && (a>c)) {
    cout<<"El numero mayor es "<<a;
}

if ((b>a) && (b>c)) {
    cout<<"El numero mayor es "<<b;
}

if ((c>a) && (c>b)) {
    cout<<"El numero mayor es "<<c;
}

return 0;
}
