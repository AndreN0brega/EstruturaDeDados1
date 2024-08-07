#include <iostream>
#include "listaEncadeada.h"

using namespace std;

int main(){
    ListaEncadeada lista;

    cout << "Lista esta vazia? ";
    if(lista.vazia())
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;

    lista.inserir(1, 4);
    lista.inserir(2, 10);
    lista.inserir(3, 33);
    lista.inserir(4, 42);
    lista.inserir(2, 77);
    lista.exibir();

    cout << "Tamanho da lista: " << lista.tamanho() << endl;

    cout << "Elemento da posicao 2: " << lista.elemento(2) << endl;

    cout << "Modificando o elemento da posicao 2 por 12" << endl;
    lista.modificar(2, 12);
    lista.exibir();

    cout << "Retirando o elemento da posicao 4" << endl;
    lista.retirar(4);
    lista.exibir();
    
    cout << "Tamanho da lista: " << lista.tamanho() << endl;

    cout << "Lista esta vazia? ";
    if(lista.vazia())
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;

    return 0;
}