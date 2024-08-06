#pragma once
#include "no.h"

class ListaEncadeada{
    private:
        No* cabeca;
        int tamAtual;
    
    public:
        ListaEncadeada();
        ~ListaEncadeada();

        bool vazia();
        int tamanho();
        int elemento(int pos);
        void modificar(int pos, int valor);
        void inserir(int pos, int valor);
        void retirar(int pos);
        void exibir();
};