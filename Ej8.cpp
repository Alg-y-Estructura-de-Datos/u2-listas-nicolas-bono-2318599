    #include <iostream>
    using namespace std;
    #include "Lista/CircList.h"
    void Mostrarlista(CircList<string>monitor);
        int main(){
        CircList<string>Monitor;
        Monitor.insertarUltimo("coca $1000");
        Monitor.insertarUltimo("alfajores $500");
        Monitor.insertarUltimo("papas $200");
        Mostrarlista(Monitor);
    }

    void Mostrarlista(CircList<string>monitor){
        if(monitor.esVacia()){
            cout<<"no hay nada \n";
        }
        int pos=0;
        while (true){
            cout<<monitor.getDato(pos)<<"\n";
            pos++;
            pos %= monitor.getTamanio();
        }
    }
