#include <iostream>
using namespace std;
#include "Lista/Lista.h"
void borrarelementos(Lista<int>&lista,int n);
int main() {
    Lista<int> Lista;
    int n,p;

    cout<<"Ingrese el tamanio de la lista \n";
    cin>>n;

    for (int i = 0; i < n; i++) {
        Lista.insertarUltimo(i+1);
    }
    cout<<"Ingrese el numero que borras\n";
    cin>>p;
Lista.print();
    borrarelementos(Lista,p);
Lista.print();

}

void borrarelementos(Lista<int>&lista,int n) {
    int tamanio;
    tamanio=lista.getTamanio();
    for (int i = 0; i < tamanio; ++i) {
        if (lista.getDato(i)==n){
            lista.remover(i);
            tamanio--;
        }
    }
}