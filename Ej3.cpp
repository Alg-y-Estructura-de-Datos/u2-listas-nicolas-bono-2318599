#include <iostream>
using namespace std;
#include "Lista/Lista.h"
void intercambiarlista(Lista<int>&list1,Lista<int>&list2);
int main() {
    Lista<int> Lista1;
    Lista<int>Lista2;
    int n, d, p,e;
    cout<<"Ingrese el tamaño de la Lista1: ";
    cin>>n;
    cout<<"Ingrese el tamaño de la Lista2: ";
    cin>>p;

    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el valor de la lista1 en la posicion: "<<i<<endl;
        cin>>d;
        Lista1.insertarUltimo(d);
    }

    for (int i = 0; i < p; i++) {
        cout<<"Ingrese el valor de la lista2 en la posicion: "<<i<<endl;
        cin>>e;
        Lista2.insertarUltimo(e);
    }

    intercambiarlista(Lista1,Lista2);
    cout<<"lista 1\n";
    Lista1.print();
    cout<<"lista 2\n";
    Lista2.print();
}


void intercambiarlista(Lista<int>&list1,Lista<int>&list2){
 Lista<int> aux1,aux2;

    for (int i = 0; i < list1.getTamanio(); i++) {
        aux1.insertarUltimo(list1.getDato(i));
    }

    for (int i = 0; i < list2.getTamanio(); i++) {
        aux2.insertarUltimo(list2.getDato(i));
    }
    list1.vaciar();
    list2.vaciar();

    for (int i = 0; i < aux2.getTamanio(); i++) {
        list1.insertarUltimo(aux2.getDato(i));
    }
    for (int i = 0; i < aux1.getTamanio(); i++) {
        list2.insertarUltimo(aux1.getDato(i));
    }
}
