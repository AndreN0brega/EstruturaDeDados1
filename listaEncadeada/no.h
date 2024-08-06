#pragma once

class No {
    public:
        int dado;
        No* prox;

        No(int valor) : dado(valor), prox(nullptr) {}
};