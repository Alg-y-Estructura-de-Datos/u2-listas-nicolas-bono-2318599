#include <iostream>
using namespace std;
#include "Lista/Lista.h"
/*Escribir un programa que pida al usuario una palabra o frase y la almacene en una Lista
separando letra por letra, luego pedirá al usuario una vocal que desee contar y, por último, se
debe imprimir por pantalla la lista y el número de veces que aparece la vocal en la palabra o
frase. Validar que la Lista no esté vacía y que la letra a contar que introduzca el usuario sea
una voca*/
void vocalesenlapalabra(string a,Lista<char>&lista);
int main(){
    string a;
    cout<<"dime la frase \n";
    getline(cin,a);
    Lista<char>Lista;
    vocalesenlapalabra(a,Lista);
    Lista.print();
}

void vocalesenlapalabra(string a,Lista<char>&lista){
    int i;
    while(a[i]!='\0'){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
        lista.insertarUltimo(a[i]);
        i++;
        }
    }
}