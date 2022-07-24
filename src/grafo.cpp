
#include "grafo.h"
#include "no.h"
#include "aresta.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stack>
#include <queue>
#include <list>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <float.h>
#include <iomanip>
#include <stack>
// #include <vector>
#define INFINITO 99999999
#include<bits/stdc++.h>

using namespace std;


/**************************************************************************************************
 * Definindo of metodos do grafo
**************************************************************************************************/

// Constructor
Grafo::Grafo(int ordem, bool direcionado, bool aresta_Com_Peso, bool no_Com_Peso)
{

    this->ordem = ordem;
    this->direcionado = direcionado;
    this->aresta_com_peso = aresta_com_peso;
    this->no_com_peso = no_com_peso;
    this->primeiro_no = this->ultimo_no = nullptr;
    this->numero_arestas = 0;
}
// Destructor
Grafo::~Grafo()
{

    No *prox_no = this->primeiro_no;

    while (prox_no != nullptr)
    {

        prox_no->removeTodasArestas();
        No *aux_no = prox_no->getProxNo();
        delete prox_no;
        prox_no = aux_no;
    }
}

void Grafo::printarInfos(){

    cout << "Ordem do grafo " << ordem << endl;
    cout << "Numero de arestas " << numero_arestas << endl;
    cout << "Direcionado " << direcionado << endl;
    cout << "Peso nas arestas " << aresta_com_peso<< endl;
    cout << "Peso nos nos " << no_com_peso << endl;

}

void Grafo::printarGrafo(){

        cout << "printando grafo" << endl;

      if(this->primeiro_no != nullptr){

        for(No* aux = this->primeiro_no; aux != nullptr; aux = aux->getProxNo()){
                    cout << endl;
                    cout << aux->getGrupo()<< ":" << aux->getId();
        }

        for(No* aux = this->primeiro_no; aux != nullptr; aux = aux->getProxNo()){
                 if(aux->getPrimeiraAresta() != nullptr){
                for(Aresta* aux2 = aux->getPrimeiraAresta(); aux2 != nullptr; aux2 = aux2->getProxAresta()){
                    cout << endl;
                    cout << aux->getId()  <<  " -- "<< aux2->getIdAlvo() << "|" << aux2->getPeso();
                }
            }
        }
        cout << endl;
    }else{

        cout << "primeiro no eh nulo" << endl;
    }

}
