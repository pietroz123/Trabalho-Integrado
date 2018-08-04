
/*
 - Classe Texto:
    → Contém uma LISTA de Palavras;
    → Contém nome do ARQUIVO original do Texto;
    → Permite carregar um Texto a partir de um ARQUIVO;
    → Permite percorrer o texto, palavra por palavra;
    → Permite alterar uma Palavra;
    → Permite GRAVAR o Texto em um ARQUIVO (Não necessariamente o Original).
*/

#ifndef TEXTO_H
#define TEXTO_H

#include <list>
#include <fstream>

#include "Palavra.h"

class Texto {

    private:
        // → Contém nome do ARQUIVO original do Texto;
        string Nome_Arquivo_Texto;
        list<Palavra> Palavras_Texto;

    public:
        // → Permite carregar um Texto a partir de um ARQUIVO;
        void setNomeArquivo(string Nome);
        void CarregarTexto();

        // → Permite percorrer o texto, palavra por palavra;
        void ImprimirTexto();
        bool Buscar(Palavra &);

        // → Permite alterar uma Palavra;
        void AlterarPalavra(list<Palavra> &lista, Palavra &P);        

        // → Permite GRAVAR o Texto em um ARQUIVO (Não necessariamente o Original);
        void GravarTextoArquivo(ofstream &Arquivo);
        void GravarTextoDiferente();
        void GravarTextoOriginal();

        // Funções Auxiliares
        //Retorna a Lista com todas as Palavras do Texto
        list<Palavra> getPalavrasTexto();


};


#endif 