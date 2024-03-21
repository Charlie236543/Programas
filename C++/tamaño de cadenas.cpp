#include <iostream>

using namespace std;

int main () {
string cadena;
char a[50];
int as=0;
for (int x=0;x<50; x++) {
    a[x]=' ';
}

cout<<"Ingrese una cadena"<<endl;

cin.getline(a,50);

for (int i=0; i<50; i++) {
if(a[i]!=' '){
    as=as+1;
}
}


cout<<as-1<<endl;

return 0;
}
