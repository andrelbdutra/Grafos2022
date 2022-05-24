#include "no.h"
#include "aresta.h"
#include <iostream>

using namespace std;

/**************************************************************************************************
 * Definindo os metodos de no
**************************************************************************************************/

// Constructor
No::No(int id){

    this->id = id;
    this->grau_entrada = 0;
    this->grau_saida = 0;
    this->peso = 0;
    this->primeira_aresta = nullptr;
    this->ultima_aresta = nullptr;
    this->proximo_no = nullptr;
    this->grupo = -1;
};

No::No(int id, int grupo){

    this->id = id;
    this->grau_entrada = 0;
    this->grau_saida = 0;
    this->peso = 0;
    this->primeira_aresta = nullptr;
    this->ultima_aresta = nullptr;
    this->proximo_no = nullptr;
    this->grupo = grupo;
};

// Destrutor
No::~No(){

    Aresta* prox_aresta = this->primeira_aresta;

    while(prox_aresta != nullptr){

        Aresta* aux_aresta = prox_aresta->getProxAresta();
        delete prox_aresta;
        prox_aresta = aux_aresta;

    }

};
