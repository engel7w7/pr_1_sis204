#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;

struct nodo {
    string info;
    struct nodo* EI;
    struct nodo* ED;
};

nodo* raiz;
nodo* aux;

void iniciar() {
    raiz = NULL;
    aux = NULL;
}

int vacia() {
    return raiz == NULL;
}

void Insertar_Raiz(string valor) {
    if (vacia()) {
        raiz = new nodo;
        raiz->info = valor;
        raiz->EI = NULL;
        raiz->ED = NULL;
    }
}

void insertar_izquierdo(nodo* padre, string valor) {
    nodo* nodonuevo = new nodo;
    nodonuevo->info = valor;
    nodonuevo->EI = NULL;
    nodonuevo->ED = NULL;
    padre->EI = nodonuevo;
}

void insertar_derecho(nodo* padre, string valor) {
    nodo* nodonuevo = new nodo;
    nodonuevo->info = valor;
    nodonuevo->EI = NULL;
    nodonuevo->ED = NULL;
    padre->ED = nodonuevo;
}

void PreOrden(nodo* r) {
    if (r != NULL) {
        cout << r->info + " ";
        PreOrden(r->EI);
        PreOrden(r->ED);
    }
}

void EntreOrden(nodo* r) {
    if (r != NULL) {
        EntreOrden(r->EI);
        cout << r->info + " ";
        EntreOrden(r->ED);
    }
}

void PosOrden(nodo* r) {
    if (r != NULL) {
        PosOrden(r->EI);
        PosOrden(r->ED);
        cout << r->info + " ";
    }
}

void buscar(nodo* r, string nombre) {
    if ((r != NULL)) {
        if (r->info == nombre) {
            aux = r;
        }
        else {
            buscar(r->EI, nombre);
            buscar(r->ED, nombre);
        }
    }
}

int contar_hijos(nodo* nodo) {
    int count = 0;
    if (nodo->EI != NULL) count++;
    if (nodo->ED != NULL) count++;
    return count;
}

int grado_nodo(nodo* nodo) {
    return contar_hijos(nodo);
}

int grado_arbol(nodo* r) {
    if (r == NULL) return 0;
    int max_grado = contar_hijos(r);
    max_grado = max(max_grado, grado_arbol(r->EI));
    max_grado = max(max_grado, grado_arbol(r->ED));
    return max_grado;
}

int nivel_nodo(nodo* r, string nombre, int nivel = 0) {
    if (r == NULL) return -1;
    if (r->info == nombre) return nivel;
    int left = nivel_nodo(r->EI, nombre, nivel + 1);
    if (left != -1) return left;
    return nivel_nodo(r->ED, nombre, nivel + 1);
}

int contar_nodos(nodo* r) {
    if (r == NULL) return 0;
    return 1 + contar_nodos(r->EI) + contar_nodos(r->ED);
}

bool es_completo(nodo* r, int index, int nodos_totales) {
    if (r == NULL) return true;
    if (index >= nodos_totales) return false;
    return es_completo(r->EI, 2 * index + 1, nodos_totales) && es_completo(r->ED, 2 * index + 2, nodos_totales);
}

int main() {
    string cod, nombre;
    int opc;

    iniciar();
    do {
        system("cls");
        cout << "           ARBOL BINARIO" << endl;
        cout << "      Seleccione la opcion a realizar\n\n";
        cout << "      1.- Insertar la raiz\n";
        cout << "      2.- Mostrar la raiz\n";
        cout << "      3.- Insertar un nodo conociendo el padre\n";
        cout << "      4.- Mostrar el arbol en preorden\n";
        cout << "      5.- Mostrar el arbol en Entreorden\n";
        cout << "      6.- Mostrar el arbol en Posorden\n";
        cout << "      8.- Contar los hijos de un nodo\n";
        cout << "      9.- Grado de un nodo\n";
        cout << "     10.- Grado del arbol\n";
        cout << "     11.- Nivel de un nodo\n";
        cout << "     12.- Contar los nodos del arbol\n";
        cout << "     13.- Es un arbol completo?\n";
        cout << "      7.- Salir\n\nOpcion(1-13): ";
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Entre el valor a insertar en la raiz:\n ";
            cin >> cod;
            Insertar_Raiz(cod);
            break;
        case 2:
            if (!vacia()) cout << "Raiz: " + raiz->info + "\n";
            break;
        case 3:
            cout << "Entre el valor de otro nodo: \n";
            cin >> cod;
            cout << "Entre el valor del padre: \n";
            cin >> nombre;
            aux = NULL;
            buscar(raiz, nombre);
            if (aux == NULL) {
                cout << "No existe el padre\n";
            }
            else {
                if (aux->EI == NULL) {
                    insertar_izquierdo(aux, cod);
                }
                else if (aux->ED == NULL) {
                    insertar_derecho(aux, cod);
                }
                else {
                    cout << "Ya tiene dos hijos\n";
                }
            }
            break;
        case 4:
            PreOrden(raiz);
            break;
        case 5:
            EntreOrden(raiz);
            break;
        case 6:
            PosOrden(raiz);
            break;
        case 8:
            cout << "Entre el valor del nodo: ";
            cin >> nombre;
            aux = NULL;
            buscar(raiz, nombre);
            if (aux) cout << "Tiene " << contar_hijos(aux) << " hijos\n";
            break;
        case 9:
            cout << "Entre el valor del nodo: ";
            cin >> nombre;
            aux = NULL;
            buscar(raiz, nombre);
            if (aux) cout << "Grado del nodo: " << grado_nodo(aux) << "\n";
            break;
        case 10:
            cout << "Grado del arbol: " << grado_arbol(raiz) << "\n";
            break;
        case 11:
            cout << "Entre el valor del nodo: ";
            cin >> nombre;
            cout << "Nivel del nodo: " << nivel_nodo(raiz, nombre) << "\n";
            break;
        case 12:
            cout << "Total de nodos: " << contar_nodos(raiz) << "\n";
            break;
        case 13:
            cout << (es_completo(raiz, 0, contar_nodos(raiz)) ? "El arbol es completo\n" : "El arbol no es completo\n");
            break;
        case 7:
            exit(0);
            break;
        }
        getchar();
        getchar();
    } while (opc != 7);

    return 0;
}
