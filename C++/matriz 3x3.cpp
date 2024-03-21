#include <iostream>

using namespace std;

int main () {
int matriz [3][3];

for (int i=0; i<=2; i++) {
    for (int a=0; a<=2; a++) {
        cout<<"Ingrese el valor de la matriz en la posicion "<<i+1<<","<<a+1<<endl;
        cin>>matriz[i][a];
    }
}

for (int x=0; x<=2; x++) {
    for (int y=0; y<=2; y++) {
        cout<<"El valor de la matriz en la posicion "<<x+1<<","<<y+1<<" es"<<endl;
        cout<<matriz[x][y]<<endl<<endl;
    }
}

}
