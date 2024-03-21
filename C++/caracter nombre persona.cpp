#include <iostream>

using namespace std;

int main ()
 {
string cadena;
char a[50];
for (int x=0;x<50; x++) {
    a[x]=' ';
}

cout<<"Ingrese una cadena"<<endl;

cin.getline(a,50);

for (int i=0; i<50; i++) {
        if(a[i]!=' '){
        cout<<a[i]<<endl;
        }
}

return 0;

 }
