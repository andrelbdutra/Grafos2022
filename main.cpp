#include <iostream>
#include <fstream>
//#include <string>
//#include <math.h>
//#include <utility>
//#include <tuple>
//#include <iomanip>
#include <stdlib.h>
//#include <chrono>
#include "include/grafo.h"
#include "include/no.h"

using namespace std;

Grafo* leitura(ifstream& arquivo_entrada, int direcionado, int arestaComPeso, int noComPeso){
}

void leituraArquivo(ifstream& arquivo_entrada, bool direcionado, bool arestaComPeso, bool noComPeso){
    //Vari�veis auxiliares da cria��o dos n�s no Grafo
    int ordem;
    int verticeOrigem;
    int verticeAlvo;
    int peso;

    //Pegando a ordem do grafo
    arquivo_entrada >> ordem;

    //Criando objeto grafo
    Grafo* grafo = new Grafo(ordem, direcionado, arestaComPeso, noComPeso);
}

int main(int argc, char const *argv[])
{
    int ordem;
    int verticeOrigem;
    int verticeAlvo;
    int peso;
    int a[3];
    int b[3];
    int c[3];

    //verificando se h� 6 argumentos no programa
    if(argc != 6){
        cout << "Argumentos invalidos!";
        return 1;
    }
    //salvando o nome do arquivo e o de entrada
    string nome_programa(argv[0]);
    string nome_arquivo_entrada(argv[1]);

    //abrindo arquivo de entrada
    ifstream arquivo_entrada;
    arquivo_entrada.open(argv[1], ios::in);

    Grafo* grafo;
    //testando se os arquivos est�o abertos
    if(arquivo_entrada.is_open()){
        cout << "Lendo arquivo: " << argv[1] << endl;
        leituraArquivo(arquivo_entrada, 0, 0, 0);
        grafo = leitura(arquivo_entrada, atoi(argv[3]), atoi(argv[4]), atoi(argv[5]));
    }else{
        cout << "Nao foi possivel abrir o arquivo: " << nome_arquivo_entrada << endl;
    }
    arquivo_entrada >> ordem;
    cout << "Ordem do grafo:" << ordem << endl;
    int i = 0;
    while(arquivo_entrada >> verticeOrigem >> verticeAlvo >> peso){
        cout << verticeOrigem <<endl;
        a[i] = verticeOrigem;
        cout<<a[i]<<endl;
        b[i] = verticeAlvo;
        c[i] = peso;
        i++;
    }
    for(int k=0; k <= 2; k++){
        cout << "vertice " << k+1 << "�: " << a[k] << " -> " << b[k] << " [" << c[k] << "]" << endl;
    }
    //fechando arquivo de entrada
    arquivo_entrada.close();
    cout << "FIM DO PROGRAMA" << endl;
    return 0;
}
