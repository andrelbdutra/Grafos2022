#include "aresta.h"
#include <iostream>

using namespace std;

/**************************************************************************************************
 * Definindo os metodos de aresta
**************************************************************************************************/

// Construtor
Aresta::Aresta(int id_alvo){

    this->id_alvo = id_alvo;
    this->proxima_aresta = nullptr;
    this->peso = 0;

}

// Destrutor
Aresta::~Aresta(){

}
