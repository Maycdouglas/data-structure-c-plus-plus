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
        cout << "ERRO: Indice invalido!" << endl;
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

void ListaCont::insert(int index, int value)
{
    if(length == max)
    {
        cout << "ERRO: Lista cheia" << endl;
        exit(1);
    }
    
    if(index >=0 && index < length)
    {
        for(int i = length - 1; i >= index; i--)
            nodes[i+1] = nodes[i];

        nodes[index] = value;
        length++;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::remove(int index)
{
    if(length == 0)
    {
        cout << "ERRO: Lista vazia" << endl;
    }
    if(index >=0 && index < length)
    {
        for(int i = index; i < length - 1; i++)
            nodes[i] = nodes[i+1];

        length--;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::insertStart(int value)
{
    if(length == 0)
    {
        nodes[length] = value;
        length++;
    }
    else
        insert(0,value);
}

void ListaCont::removeStart()
{
    remove(0);
}

void ListaCont::print()
{
    cout << "Imprimindo lista:" << endl;

    for(int i = 0; i < length; i++)
        cout << nodes[i] << endl;
}