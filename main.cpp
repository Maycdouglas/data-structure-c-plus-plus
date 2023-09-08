#include <iostream>
#include "src/Funcao.h"
#include "src/ListaCont.h"

using namespace std;

int main() {
    cout << "Hello World" << endl;
    funcao();

    const ListaCont lista(10);

    cout << lista.get(0) << endl;

    return 0;
}