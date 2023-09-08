#include <iostream>
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int size)
{
    cout << "Criando objeto ListaCont" << endl;
    max = size;
    length = 0;
    nodes = new int[max];
}

ListaCont::~ListaCont()
{
    cout << "Destruindo objeto ListaCont" << endl;
    delete [] nodes;
}

int ListaCont::get(int index) const
{
    if(index >= 0 && index < length)
        return nodes[index];
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::set(int index, int value)
{
    if(index >= 0 && index < length)
        nodes[index] = value;
    else
    {
        cout << "Erro: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::insertEnd(int value)
{
    if(length == max)
    {
        cout << "ERRO: Lista cheia" << endl;
        exit(1);
    }
    nodes[length] = value;
    length = length + 1;
}

void ListaCont::removeEnd()
{
    if(length == 0)
    {
        cout << "ERRO: Lista vazia" << endl;
    }
    length = length - 1;
}