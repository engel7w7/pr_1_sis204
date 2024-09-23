//  -> 1

//#include <iostream>
//
//using namespace std;
//
//struct Nodo {
//    int dato;
//    Nodo* siguiente;
//
//    Nodo(int val) : dato(val), siguiente(nullptr) {}
//};
//
//void agregarNodo(Nodo*& cabeza, int dato) {
//    Nodo* nuevoNodo = new Nodo(dato);
//    nuevoNodo->siguiente = cabeza;
//    cabeza = nuevoNodo;
//}
//
//void imprimirLista(Nodo* cabeza) {
//    Nodo* actual = cabeza;
//    while (actual != nullptr) {
//        cout << actual->dato << " ";
//        actual = actual->siguiente;
//    }
//    cout << endl;
//}
//
//Nodo* invertirLista(Nodo* cabeza) {
//    Nodo* anterior = nullptr;
//    Nodo* actual = cabeza;
//    Nodo* siguiente = nullptr;
//
//    while (actual != nullptr) {
//        siguiente = actual->siguiente; 
//        actual->siguiente = anterior; 
//        anterior = actual;         
//        actual = siguiente;          
//    }
//
//    return anterior;
//}
//
//int main() {
//    Nodo* lista = nullptr;
//
//    agregarNodo(lista, 1);
//    agregarNodo(lista, 2);
//    agregarNodo(lista, 3);
//    agregarNodo(lista, 4);
//
//    cout << "Lista original: ";
//    imprimirLista(lista);
//
//    Nodo* listaInvertida = invertirLista(lista);
//
//    cout << "Lista invertida: ";
//    imprimirLista(listaInvertida);
//
//    return 0;
//}


//  -> 2

//#include <iostream>
//
//using namespace std;
//
//struct Nodo {
//    int dato;
//    Nodo* siguiente;
//};
//
//void eliminarDuplicados(Nodo* cabeza) {
//    Nodo* actual = cabeza;
//
//    while (actual != nullptr && actual->siguiente != nullptr) {
//        Nodo* corredor = actual;
//
//        while (corredor->siguiente != nullptr) {
//            if (actual->dato == corredor->siguiente->dato) {
//                Nodo* duplicado = corredor->siguiente;
//                corredor->siguiente = corredor->siguiente->siguiente;
//                delete duplicado;
//            }
//            else {
//                corredor = corredor->siguiente;
//            }
//        }
//        actual = actual->siguiente;
//    }
//}
//
//void imprimirLista(Nodo* cabeza) {
//    Nodo* temp = cabeza;
//    while (temp != nullptr) {
//        cout << temp->dato << " -> ";
//        temp = temp->siguiente;
//    }
//    cout << "nullptr" << endl;
//}
//
//void insertarAlFinal(Nodo*& cabeza, int dato) {
//    Nodo* nuevoNodo = new Nodo{ dato, nullptr };
//    if (cabeza == nullptr) {
//        cabeza = nuevoNodo;
//    }
//    else {
//        Nodo* temp = cabeza;
//        while (temp->siguiente != nullptr) {
//            temp = temp->siguiente;
//        }
//        temp->siguiente = nuevoNodo;
//    }
//}
//
//int main() {
//    Nodo* lista = nullptr;
//    insertarAlFinal(lista, 1);
//    insertarAlFinal(lista, 2);
//    insertarAlFinal(lista, 3);
//    insertarAlFinal(lista, 2);
//    insertarAlFinal(lista, 4);
//    insertarAlFinal(lista, 3);
//
//    cout << "Lista original: ";
//    imprimirLista(lista);
//
//    eliminarDuplicados(lista);
//
//    cout << "Lista sin duplicados: ";
//    imprimirLista(lista);
//
//    return 0;
//}

//  -> 3	

//#include <iostream>
//
//using namespace std;
//
//struct Nodo {
//    int dato;
//    Nodo* siguiente;
//    Nodo(int val) : dato(val), siguiente(nullptr) {}
//};
//void agregarNodo(Nodo*& cabeza, int dato) {
//    Nodo* nuevoNodo = new Nodo(dato);
//    nuevoNodo->siguiente = cabeza;
//    cabeza = nuevoNodo;
//}
//void imprimirLista(Nodo* cabeza) {
//    for (Nodo* actual = cabeza; actual != nullptr; actual = actual->siguiente) {
//        cout << actual->dato << " ";
//    }
//    cout << endl;
//}
//bool contiene(Nodo* cabeza, int dato) {
//    for (Nodo* actual = cabeza; actual != nullptr; actual = actual->siguiente) {
//        if (actual->dato == dato) {
//            return true;
//        }
//    }
//    return false;
//}
//
//Nodo* unionListas(Nodo* lista1, Nodo* lista2) {
//    Nodo* unionLista = nullptr;
//    for (Nodo* nodo = lista1; nodo != nullptr; nodo = nodo->siguiente) {
//        agregarNodo(unionLista, nodo->dato);
//    }
//    for (Nodo* nodo = lista2; nodo != nullptr; nodo = nodo->siguiente) {
//        if (!contiene(unionLista, nodo->dato)) {
//            agregarNodo(unionLista, nodo->dato);
//        }
//    }
//    return unionLista;
//}
//Nodo* interseccionListas(Nodo* lista1, Nodo* lista2) {
//    Nodo* interseccionLista = nullptr;
//    for (Nodo* nodo = lista1; nodo != nullptr; nodo = nodo->siguiente) {
//        if (contiene(lista2, nodo->dato)) {
//            agregarNodo(interseccionLista, nodo->dato);
//        }
//    }
//    return interseccionLista;
//}
//int main() {
//    Nodo* lista1 = nullptr;
//    Nodo* lista2 = nullptr;
//
//    agregarNodo(lista1, 3);
//    agregarNodo(lista1, 2);
//    agregarNodo(lista1, 1);
//
//    agregarNodo(lista2, 4);
//    agregarNodo(lista2, 3);
//    agregarNodo(lista2, 2);
//
//    cout << "Union: ";
//    imprimirLista(unionListas(lista1, lista2));
//
//    cout << "Interseccion: ";
//    imprimirLista(interseccionListas(lista1, lista2));
//
//    return 0;
//}


//  -> 4

//#include <iostream>
//
//using namespace std;
//
//struct Nodo {
//    int dato;
//    Nodo* siguiente;
//
//    Nodo(int val) : dato(val), siguiente(nullptr) {}
//};
//
//class Pila {
//private:
//    Nodo* cima;
//
//public:
//    Pila() : cima(nullptr) {}
//
//    //nuevo elemento
//    void push(int dato) {
//        Nodo* nuevoNodo = new Nodo(dato);
//        nuevoNodo->siguiente = cima;
//        cima = nuevoNodo;
//    }
//
//    //sacar elemento pila
//    int pop() {
//        if (cima == nullptr) {
//            throw runtime_error("Pila vacía");
//        }
//        int dato = cima->dato;
//        Nodo* nodoAEliminar = cima;
//        cima = cima->siguiente;
//        delete nodoAEliminar;
//        return dato;
//    }
//
//    //verificar tope 
//    int top() {
//        if (cima == nullptr) {
//            throw runtime_error("Pila vacía");
//        }
//        return cima->dato;
//    }
//
//    //verificar pilavacia
//    bool estaVacia() {
//        return cima == nullptr;
//    }
//
//    //destructor pila
//    ~Pila() {
//        while (!estaVacia()) {
//            pop();
//        }
//    }
//};
//
//int main() {
//    Pila pila;
//
//
//    pila.push(10);
//    pila.push(20);
//    pila.push(30);
//
//    cout << "Elemento en la cima: " << pila.top() << endl;
//
//    while (!pila.estaVacia()) {
//        cout << "Sacando: " << pila.pop() << endl;
//    }
//
//    return 0;
//}