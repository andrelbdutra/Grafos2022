#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
#include "aresta.h"

using namespace std;

// Definição da classe No
class No{

    // Atributos
    private:
        Aresta* primeira_aresta;
        Aresta* ultima_aresta;
        int id;
        unsigned int grau_entrada;
        unsigned int grau_saida;
        float peso;
        No* proximo_no;
        No* anterior_no;
        int grupo;

    public:
        // Construtor
        No(int id);
        No(int id, int grupo);
        // Destrutor
        ~No();
        // Getters
        Aresta* getPrimeiraAresta();
        Aresta* getUltimaAresta();
        int getId();
        int getGrauEntrada();
        int getGrauSaida();
        int getGrupo();
        float getPeso();
        No* getProxNo();
        // Setters
        void setProxNo(No* no);
        void setPeso(float peso);
        void setGrauEntrada(int grau);
        // Outros metodos
        bool searchAresta(int id_alvo);
        void insertEdge(int id_alvo, float peso);
        void removeTodasArestas();
        int removeAresta(int id, bool direcionado, No* no_alvo);
        void incrementaGrauSaida();
        void decrementaGrauSaida();
        void incrementaGrauEntrada();
        void decrementaGrauEntrada();
        Aresta* hasEdgeBetween(int id_alvo);

};

#endif // NO_H_INCLUDED
