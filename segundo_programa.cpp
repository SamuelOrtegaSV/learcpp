#include <iostream>
#include <string>
using namespace std;

int main(){
    int salario=3500;

    cout << "Valor del salario: " + to_string(salario) << endl;

    salario=4000;

    cout << "El nuevo salalario es: " + to_string(salario) << endl;

    salario=4000/10;
    cout << "El nuevo salario es: " + to_string(salario) << endl;
        
}