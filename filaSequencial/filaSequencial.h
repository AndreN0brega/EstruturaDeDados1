#pragma once 

using namespace std;

class FilaSequencial {
    private:
        int dados[7];
        int tamAtual;
        int tamMax;
        int inicio;
        int fim;

    public:
        FilaSequencial();

        bool vazia();
        bool cheia();
        int tamanho();
        int primeiro();
        bool inserir(int dado);
        int remover();
        void exibir();
};