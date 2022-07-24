#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
#include "aresta.h"

using namespace std;

// Defini��o da classe No
class No{

    // Atributos
    private:
        Aresta* primeira_aresta;
        Aresta* ultima_aresta;
        int id;
        int posicao;
        unsigned int grau_entrada;
        unsigned int grau_saida;
        int grau;
        float peso;
        No* proximo_no;
        bool visitado;

    public:
        // Construtor
        No(int id);
        // Destrutor
        ~No();
        // Getters
        Aresta* getPrimeiraAresta();
        Aresta* getUltimaAresta();
        int getId();
        int getGrauEntrada();
        int getGrauSaida();
        int getGrau();
        float getPeso();
        No* getProxNo();
        bool getVisited();
        // Setters
        void setProxNo(No* no);
        void setPeso(float peso);
        void setVisited(bool visitado);
        // Outros metodos
        bool searchAresta(int id_alvo);
        void insertEdge(int id_alvo, int posicao_alvo, float peso);
        void removeTodasArestas();
        int removeAresta(int id, bool direcionado, No* no_alvo);
        void incrementaGrauSaida();
        void decrementaGrauSaida();
        void incrementaGrauEntrada();
        void decrementaGrauEntrada();
        Aresta* hasEdgeBetween(int id_alvo);
        int getPosition();
        void setPosition(int posicao);
};

#endif // NO_H_INCLUDED
