//  -> 1

//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//void insertarEnPosicion(queue<int>& cola, int valor, int posicion) {
//    queue<int> temp;
//
//    for (int i = 0; i < posicion && !cola.empty(); ++i) {
//        temp.push(cola.front());
//        cola.pop();
//    }
//    
//    temp.push(valor);
//
//    while (!cola.empty()) {
//        temp.push(cola.front());
//        cola.pop();
//    }
//
//    cola = temp;
//}
//
//int main() {
//    queue<int> cola;
//    cola.push(1);
//    cola.push(2);
//    cola.push(3);
//    cola.push(4);
//
//    int valor, posicion;
//    cout << "Ingresa el valor a insertar: ";
//    cin >> valor;
//
//    cout << "Posicion para insertar el valor (0 es el frente): ";
//    cin >> posicion;
//
//    insertarEnPosicion(cola, valor, posicion);
//
//    cout << "Cola resultante: ";
//    while (!cola.empty()) {
//        cout << cola.front() << " ";
//        cola.pop();
//    }
//    return 0;
//}

//  -> 2

//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//void eliminarElemento(queue<int>& cola, int valor) {
//    queue<int> temp;
//
//    while (!cola.empty()) {
//        if (cola.front() != valor) {
//            temp.push(cola.front());
//        }
//        cola.pop();
//    }
//
//    cola = temp;
//}
//
//int main() {
//    queue<int> cola;
//    cola.push(1);
//    cola.push(2);
//    cola.push(3);
//    cola.push(4);
//
//    int valor;
//    cout << "Ingresa el valor a eliminar: ";
//    cin >> valor;
//
//    eliminarElemento(cola, valor);
//
//    cout << "Cola resultante: ";
//    while (!cola.empty()) {
//        cout << cola.front() << " ";
//        cola.pop();
//    }
//
//    return 0;
//}

//  -> 3

//#include <iostream>
//#include <queue>
//#include <stack>
//
//using namespace std;
//
//void invertirCola(queue<int>& cola) {
//    stack<int> temp;
//
//    while (!cola.empty()) {
//        temp.push(cola.front());
//        cola.pop();
//    }
//
//    while (!temp.empty()) {
//        cola.push(temp.top());
//        temp.pop();
//    }
//}
//
//int main() {
//    queue<int> cola;
//    cola.push(4);
//    cola.push(3);
//    cola.push(2);
//    cola.push(1);
//
//    invertirCola(cola);
//
//    cout << "Cola invertida: ";
//    while (!cola.empty()) {
//        cout << cola.front() << " ";
//        cola.pop();
//    }
//
//    return 0;
//}

//  -> 4

//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int main() {
//    queue<string> cola;
//    int opcion;
//    string trabajo;
//
//    while (true) {
//        cout << "1. Agregar trabajo de impresion\n2. Imprimir trabajo\n3. Salir\nElige una opcion: ";
//        cin >> opcion;
//        cin.ignore();
//
//        if (opcion == 1) {
//            cout << "Introduce el trabajo: ";
//            getline(cin, trabajo);
//            cola.push(trabajo);
//            cout << "Trabajo agregado: " << trabajo << endl;
//        }
//        else if (opcion == 2) {
//            if (!cola.empty()) {
//                cout << "Imprimiendo: " << cola.front() << endl;
//                cola.pop();
//            }
//            else {
//                cout << "No hay trabajos en la cola.\n";
//            }
//        }
//        else if (opcion == 3) {
//            break;
//        }
//        else {
//            cout << "Opción inválida.\n";
//        }
//    }
//
//    return 0;
//}


//  -> 1 con array 

//meter al final del int main
// 
//int a[5] = { 1, 2, 3, 4, 5 };
//
//for (int i = 0; i < 5; i++)
//{
//    if (i == posicion)
//        a[i] = valor;
//}
//cout << "con array \n";
//for (int i = 0; i < 5; i++)
//{
//    cout << a[i] << " ";
//}

//  -> 3 con array

//#include <iostream>	
//using namespace std;
//int a[5] = { 1, 2, 3, 4, 5 };
//int b[5];
//int cont = 4;
//int main()
//{
//	for(int i=0;i<5;i++)
//	{
//		b[cont]=a[i];
//		cont--;
//	}
//	cout << "invertido\n";
//	for(int i=0;i<5;i++)
//	{
//		cout<<b[i]<<" ";
//	}
//}

//  -> 4 con array	

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int MAX_JOBS = 100;
//
//class ColaImpresion {
//    string trabajos[MAX_JOBS];
//    int frente = 0, final = 0;
//
//public:
//    bool agregarTrabajo(const string& trabajo) {
//        if (final < MAX_JOBS) {
//            trabajos[final++] = trabajo;
//            return true;
//        }
//        return false;
//    }
//
//    string imprimirTrabajo() {
//        if (frente < final) {
//            return trabajos[frente++];
//        }
//        return "";
//    }
//
//    bool estaVacia() {
//        return frente == final;
//    }
//};
//
//int main() {
//    ColaImpresion cola;
//    int opcion;
//    string trabajo;
//
//    while (true) {
//        cout << "1. Agregar trabajo\n2. Imprimir trabajo\n3. Salir\nElige una opcion: ";
//        cin >> opcion;
//        cin.ignore();
//
//        if (opcion == 1) {
//            cout << "Introduce el trabajo: ";
//            getline(cin, trabajo);
//            if (cola.agregarTrabajo(trabajo)) {
//                cout << "Trabajo agregado: " << trabajo << endl;
//            }
//            else {
//                cout << "Cola llena.\n";
//            }
//        }
//        else if (opcion == 2) {
//            if (!cola.estaVacia()) {
//                cout << "Imprimiendo: " << cola.imprimirTrabajo() << endl;
//            }
//            else {
//                cout << "No hay trabajos en la cola.\n";
//            }
//        }
//        else if (opcion == 3) {
//            break;
//        }
//        else {
//            cout << "Opción invalida.\n";
//        }
//    }
//
//    return 0;
//}
