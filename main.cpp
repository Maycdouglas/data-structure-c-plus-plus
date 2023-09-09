#include <iostream>
#include "src/Funcao.h"
#include "src/ListaCont.h"

using namespace std;

int main() {
    cout << "Hello World" << endl;

    ListaCont lista(5);

    lista.insertEnd(1);
    lista.insertEnd(2);
    lista.insertEnd(3);
    lista.insertEnd(4);
    lista.insertEnd(5);

    lista.print();

    return 0;
}