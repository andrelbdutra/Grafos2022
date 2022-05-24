#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

using namespace std;

// Definição da classe Aresta
class Aresta{

    // Atributos
    private:
        int id_alvo;
        Aresta* proxima_aresta;
        Aresta* anterior_aresta;
        float peso;

    public:
        // Construtor
        Aresta(int id_alvo);
        // Destrutor
        ~Aresta();
        // Getters
        int getIdAlvo();
        Aresta* getProxAresta();
        Aresta* getAnteriorAresta();
        float getPeso();
        // Setters
        void setProxAresta(Aresta* aresta);
        void setAnteriorAresta(Aresta* aresta);
        void setPeso(float peso);

};

#endif // ARESTA_H_INCLUDED
