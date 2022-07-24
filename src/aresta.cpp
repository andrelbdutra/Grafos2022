#include "aresta.h"
#include <iostream>

using namespace std;

/**************************************************************************************************
 * Definindo os metodos de aresta
**************************************************************************************************/

// Construtor
Aresta::Aresta(int id_alvo, int target_id){

    this->id_alvo = id_alvo;
    this->proxima_aresta = nullptr;
    this->peso = 0;
    this->target_id = target_id;

}

// Destrutor
Aresta::~Aresta(){
    if (this->proxima_aresta != nullptr){
        delete this->proxima_aresta;
        this->proxima_aresta =nullptr;
    }
}

//Getters

int Aresta::getIdAlvo(){
    return this->id_alvo;
}
int Aresta::getTargetId(){
    return this->target_id;
}

Aresta* Aresta::getProxAresta(){
    return this->proxima_aresta;
}

float Aresta::getPeso(){
    return this->peso;
}

//Setters
void Aresta::setProxAresta(Aresta* aresta){
    this->proxima_aresta = aresta;
}

void Aresta::setPeso(float peso){
    this->peso = peso;
}