#include <iostream>
using namespace std;
#include "Lista/ListaDoble.h"
void mostrar_historico(ListaDoble<string> &url);
void retroceder(ListaDoble<string>& url,int &urlactual);
void avanzar(ListaDoble<string>& url,int &urlactual);
int main() {
    ListaDoble<string> url;
    int urlactual = -1;
    int opcion;
    do {
        cout << "1 Mostrar historico\n";
        cout << "2 Retroceder\n";
        cout << "3 Anadir pagina\n";
        cout << "4 Avanzar\n";
        cout << "5 Terminar\n";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrar_historico(url);
                break;
            case 2:
                retroceder(url,urlactual);
                break;
            case 3: {
                string list;
                cout << "Dime la URL\n";
                cin >> list;
                url.insertarUltimo(list);
                urlactual = url.getTamanio() - 1;
                break;
            }
            case 4:
                avanzar(url,urlactual);
                break;
        }

    } while (opcion != 5);

    return 0;
}

void mostrar_historico(ListaDoble<string>& url) {
    for (int i = 0; i < url.getTamanio(); ++i) {
        cout << url.getDato(i) << "\n";
    }
}

void retroceder(ListaDoble<string>& url,int &urlactual) {
    if (urlactual > 0) {
        urlactual--;
        cout << "URL actual: " << url.getDato(urlactual) << "\n";
    } else {
        cout << "Ya estás en la primera URL.\n";
    }
}

void avanzar(ListaDoble<string>& url,int &urlactual) {
    if (urlactual < url.getTamanio()-1) {
        urlactual++;
        cout << "URL actual: " << url.getDato(urlactual) << "\n";
    } else {
        cout << "Ya estás en la última URL.\n";
    }
}
