#include <iostream>
using namespace std;

int main () {
float calificaciones[10];
float suma, prom;
for (int i =0; i<=9; i ++) {
    cout<<"Ingrese su calificacion en la materia "<<i+1<<":"<<endl;
    cin>>calificaciones[i];
    suma =suma+calificaciones[i];
}
prom=suma/10;

cout<<"El promedio del alumno es: "<<prom<<endl;

return 0;
}
