#ifndef ARESTA_H_INCLUDED
#define ARESTA_H_INCLUDED

using namespace std;

// Defini��o da classe Aresta
class Aresta{

    // Atributos
    private:
        int id_alvo;
        int target_id;
        Aresta* proxima_aresta;
        float peso;

    public:
        Aresta(int id_alvo, int target_id);
        ~Aresta();
        int getIdAlvo();
        int getTargetId();
        Aresta* getProxAresta();
        float getPeso();
        void setProxAresta(Aresta* aresta);
        void setPeso(float peso);

};

#endif // ARESTA_H_INCLUDED
