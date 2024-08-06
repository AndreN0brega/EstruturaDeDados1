#pragma once 

using namespace std;

class ListaSequencial {
    private:
        int dados[144];
        int tamAtual;
        int tamMax;

    public:
        ListaSequencial();

        bool vazia();
        bool cheia();
        int tamanho();
        int elemento(int pos);
        bool modificar(int pos, int dado);
        int procurarPos(int dado);
        bool inserir(int pos, int dado);
        int remover(int pos);
        void exibir();
};