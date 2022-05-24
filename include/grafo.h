#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include "no.h"
#include <fstream>
#include <stack>
#include <list>
#include <vector>

using namespace std;

class Grafo{

    //Atributos
    private:
        int ordem;
        int numero_arestas;
        bool direcionado;
        bool aresta_com_peso;
        bool no_com_peso;
        No* primeiro_no;
        No* ultimo_no;
        int grupoTam;

    public:
        //Construtor
        Grafo(int ordem, bool direcionado, bool aresta_com_peso, bool no_com_peso);
        //Destrutor
        ~Grafo();
        //Getters
        int getOrdem();
        int getGrupoTam();
        int getNumeroArestas();
        bool getDirecionado();
        bool getArestaComPeso();
        bool getNoComPeso();
        No* getPrimeiroNo();
        No* getUltimoNo();
        //Outros metodos
        void insereNo(int id);
        void insereNoGrupo(int id, int grupo);
        void insereAresta(int id, int id_alvo, float peso);
        void removeNo(int id);
        void novoRemoveNo(int id);
        bool procuraNo(int id);
        No* getNo(int id);
        void bubbleSort();
        void trocaNos(No* primeiro, No* segundo);

        void insereArestaSemVerificar(int id, int id_alvo, float peso);

        //methods phase1
        void topologicalSorting();
        void fechoTransitivoDireto(int idNode);
        void fechoTransitivoIndireto(int idNode);
        void breadthFirstSearch(ofstream& output_file);
        Grafo* getVertexInduced(int* listIdNodes);
        Grafo* agmKuskal(ofstream &arquivo_saida);
        Grafo* agmPrim(ofstream& arquivo_saida);
        float floydMarshall(int idSource, int idTarget, ofstream& arquivo_saida);
        float floydMarshallNoOutPut(int idSource, int idTarget);
        float dijkstra(int idSource, int idTarget, ofstream& arquivo_saida);
        void printarGrafo();
        void printarInfos();
        void buscaEmProfundidade(int idNode);
        void printarGrafoGraphviz();
        void ordenacaoTopologica();

        //methods phase1
        float greed();
        float greedRandom();
        float greedRactiveRandom();

        No* heuristica(int grupo);
        void removeTodosDoGrupo(int grupo, int nodeNotDeleted);
        bool possuiGrupo(int grupo);
        int inteiroRandomico(int min_value ,int max_value);

        // Métodos Entrega 2
        void guloso(ofstream& arquivo_saida);
        void gulosoRandomizado(ofstream& arquivo_saida, int fator);
        void gulosoRandomizadoReativo(ofstream& arquivo_saida,float vetorAlfa[5], int fator, int bloco);

        int minDistance(int dist[], bool sptSet[]);

    private:

};

#endif // GRAFO_H_INCLUDED

