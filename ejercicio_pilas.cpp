//  -> 1

//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//void insertarEnPosicion(stack<int>& pila, int valor, int posicion) {
//    stack<int> temp;
//
//    for (int i = 0; !pila.empty() && i < posicion; ++i) {
//        temp.push(pila.top());
//        pila.pop();
//    }
//
//    pila.push(valor);
//
//    while (!temp.empty()) {
//        pila.push(temp.top());
//        temp.pop();
//    }
//}
//
//int main() {
//    stack<int> pila;
//
//    pila.push(1);
//    pila.push(2);
//    pila.push(3);
//    pila.push(4);
//
//    int valor, posicion;
//
//    cout << "Ingresa el valor a insertar: ";
//    cin >> valor;
//
//    cout << "Ingresa la posicion en la que deseas insertar el valor (0 es el tope): ";
//    cin >> posicion;
//
//    insertarEnPosicion(pila, valor, posicion);
//
//    cout << "Pila tras la insercion:\n";
//    while (!pila.empty()) {
//        cout << pila.top() << " ";
//        pila.pop();
//    }
//
//    return 0;
//}

//  -> 2

//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//void eliminarElemento(stack<int>& pila, int valor) {
//    stack<int> temp;
//
//    while (!pila.empty()) {
//        if (pila.top() != valor)
//            temp.push(pila.top());
//        pila.pop();
//    }
//
//    while (!temp.empty()) {
//        pila.push(temp.top());
//        temp.pop();
//    }
//}
//
//int main() {
//    stack<int> pila;
//
//    pila.push(1);
//    pila.push(2);
//    pila.push(3);
//    pila.push(4);
//
//    int valor;
//
//    cout << "Ingresa el valor a eliminar: ";
//    cin >> valor;
//
//    eliminarElemento(pila, valor);
//
//    cout << "Pila tras eliminar el valor " << valor << ":\n";
//    while (!pila.empty()) {
//        cout << pila.top() << " ";
//        pila.pop();
//    }
//
//    return 0;
//}

//  -> 3

//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//bool estanBalanceados(const string& cadena) {
//    stack<char> pila;
//    for (char c : cadena) {
//        if (c == '(' || c == '[' || c == '{') pila.push(c);
//        else if (!pila.empty() && ((c == ')' && pila.top() == '(') ||
//            (c == ']' && pila.top() == '[') ||
//            (c == '}' && pila.top() == '{'))) {
//            pila.pop();
//        }
//        else {
//            return false;
//        }
//    }
//    return pila.empty();
//}
//
//int main() {
//    string cadena;
//    cout << "Ingresa una cadena con parentesis, corchetes y llaves: ";
//    cin >> cadena;
//
//    cout << (estanBalanceados(cadena) ? "La secuencia esta balanceada.\n" : "La secuencia no esta balanceada.\n");
//
//    return 0;
//}

//  -> 4

/*#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int evaluarPostfixStack(const string& expr) {
    stack<int> pila;

    for (char c : expr) {
        if (isdigit(c)) {
            pila.push(c - '0'); 
        }
        else {
            int op2 = pila.top(); pila.pop();
            int op1 = pila.top(); pila.pop();

            switch (c) {
            case '+': pila.push(op1 + op2); break;
            case '-': pila.push(op1 - op2); break;
            case '*': pila.push(op1 * op2); break;
            case '/': pila.push(op1 / op2); break;
            }
        }
    }

    return pila.top();
}

int main() {
    string expr = "53+82-*";
    cout << "Resultado (stack): " << evaluarPostfixStack(expr) << endl;
    return 0;
}*/

//  -> 5

/*#include <iostream>
#include <stack>
#include <string>

using namespace std;

string revertirCadena(const string& cad) {
    stack<char> pila;

    for (char c : cad) {
        pila.push(c);
    }

    string cadRevertida = "";

    while (!pila.empty()) {
        cadRevertida += pila.top();
        pila.pop();
    }

    return cadRevertida;
}

int main() {
    string cad;
    cout << "Introduce una cadena: ";
    getline(cin, cad);

    string resultado = revertirCadena(cad);
    cout << "Cadena revertida: " << resultado << endl;

    return 0;
}*/

//  -> 6

/*#include <iostream>
#include <stack>

using namespace std;

void convertirDecimalABinario(int num) {
    stack<int> pila;

    while (num > 0) {
        pila.push(num % 2);  
        num /= 2;  
    }

    cout << "Equivalente binario: ";
    while (!pila.empty()) {
        cout << pila.top();  
        pila.pop();
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Introduce un numero decimal: ";
    cin >> num;

    convertirDecimalABinario(num);

    return 0;
}*/


//  -> 1 con array

//#include <iostream>	
//using namespace std;
//int valor,pos,aux;
//int main() 
//{
//	int pila[5] = {1,2,3,4,5};
//	cout << "Ingrese el valor ";
//	cin >> valor;
//	cout << "Ingrese la posicion ";
//	cin >> pos;
//	pila[pos]= valor;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << pila[i] << " ";
//	}
//	
//}

//  -> 2 con array

//#include <iostream>
//using namespace std;	
//int valor;
//int main() 
//{
//	int pila[5] = {1,2,3,4,5};
//	cout << "Ingrese el valor ";
//	cin >> valor;
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (pila[i]==valor)
//			pila[i]=NULL;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		if(pila[i]!=0)
//			cout << pila[i] << " ";
//	}
//}

//  -> 3 con array

//#include <iostream>
//using namespace std;
//
//char cadena[20];
//
//int main()
//{
//    cout << "Ingrese la cadena: ";
//    bool b1 = false, b2 = false, b3 = false, b4 = false, b5 = false, b6 = false;
//    cin >> cadena;
//    int i = 0;
//    while (cadena[i] != '\0')
//    {
//        if (cadena[i] == '(') {
//            cout << "Parentesis abierto\n";
//            b1 = true;
//        }
//        if (cadena[i] == ')') {
//            cout << "Parentesis cerrado\n";
//            b2 = true;
//        }
//        if (cadena[i] == '[') {
//            cout << "Corchete abierto\n";
//            b3 = true;
//        }
//        if (cadena[i] == ']') {
//            cout << "Corchete cerrado\n";
//            b4 = true;
//        }
//        if (cadena[i] == '{') {
//            cout << "Llave abierta\n";
//            b5 = true;
//        }
//        if (cadena[i] == '}') {
//            cout << "Llave cerrada\n";
//            b6 = true;
//        }
//        i++;
//    }
//    if (b1 == b2 && b3 == b4 && b5 == b6)
//        cout << "La secuencia esta balanceada\n";
//    else
//        cout << "La secuencia no esta balanceada\n";
//
//    return 0;
//}

//  -> 4 con array  

/*#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int evaluarPostfixArray(const string& expr) {
    int pila[100];
    int top = -1;

    for (char c : expr) {
        if (isdigit(c)) {
            pila[++top] = c - '0'; 
        }
        else {
            int op2 = pila[top--];
            int op1 = pila[top--];

            switch (c) {
            case '+': pila[++top] = op1 + op2; break;
            case '-': pila[++top] = op1 - op2; break;
            case '*': pila[++top] = op1 * op2; break;
            case '/': pila[++top] = op1 / op2; break;
            }
        }
    }

    return pila[top];
}

int main() {
    string expr = "53+82-*";
    cout << "Resultado (array): " << evaluarPostfixArray(expr) << endl;
    return 0;
}*/


//  -> 5 con array  

/*#include <iostream>
#include <string>

using namespace std;

string revertirCadena(const string& cad) {
    int n = cad.length();
    char pila[100];

    for (int i = 0; i < n; i++) {
        pila[i] = cad[i];
    }

    string cadRevertida = "";

    for (int i = n - 1; i >= 0; i--) {
        cadRevertida += pila[i];
    }

    return cadRevertida;
}

int main() {
    string cad;
    cout << "Introduce una cadena: ";
    getline(cin, cad);

    string resultado = revertirCadena(cad);
    cout << "Cadena revertida: " << resultado << endl;

    return 0;
}*/

//  -> 6 con array  

/*#include <iostream>

using namespace std;

void convertirDecimalABinario(int num) {
    int pila[32];  
    int top = 0;

    while (num > 0) {
        pila[top++] = num % 2;  
        num /= 2;             
    }

    for (int i = top - 1; i >= 0; i--) {
        cout << pila[i];
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Introduce un numero decimal: ";
    cin >> num;

    convertirDecimalABinario(num);

    return 0;
}*/

//  -> 7 con array 

/*#include <iostream>
#include <string>

using namespace std;

bool validarParentesis(const string& expr) {
    char pila[100];
    int top = -1;

    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            pila[++top] = c;
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (top == -1) {
                return false;
            }
            char topChar = pila[top--];
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
        }
    }
    return top == -1;
}

int main() {
    string expr;
    cout << "Introduce una expresion aritmetica: ";
    getline(cin, expr);

    if (validarParentesis(expr)) {
        cout << "Los parentesis están correctamente anidados." << endl;
    }
    else {
        cout << "Los parentesis no están correctamente anidados." << endl;
    }

    return 0;
}
*/