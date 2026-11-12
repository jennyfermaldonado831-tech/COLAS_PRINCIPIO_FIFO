#include <iostream>
using namespace std;

struct Nodo {
int dato;
Nodo* next;
};

int main() {
Nodo* frente = NULL;
Nodo* final = NULL;

int datos[5] = {10, 20, 30, 40, 50};

cout << "ENTRANDO A LA COLA... " << endl;
for (int i = 0; i < 5; i++) {
Nodo* nuevo = new Nodo();
nuevo->dato = datos[i];
nuevo->next = NULL;

if (frente == NULL) {
frente = nuevo;
final = nuevo;
} else {
final->next = nuevo;
final = nuevo;
}
cout << "\n Entró: " << datos[i] << endl;
}

cout << "\n\n SALIENDO DE LA COLA... " << endl;
while (frente != NULL) {
Nodo* aux = frente;
cout << "\n Salió: " << aux->dato << endl;
frente = frente->next;
delete aux;
}
return 0;
}
