
 /*Classe Texto - - "Mínimo"
    - Contém uma LISTA de Palavras;
    - Contém nome do ARQUIVO original do Texto;
    - Permite carregar um Texto a partir de um ARQUIVO;
    - Permite percorrer o texto, palavra por palavra;
    - Permite alterar uma Palavra;
    - Permite GRAVAR o Texto em um ARQUIVO (Não necessariamente o Original).
*/

#ifndef TEXTO_H
#define TEXTO_H

#include <list>
#include <vector>

#include "Palavra.h"

class Texto {

    private:
        string Nome_Arquivo;
        vector<Palavra> L;

    public:
        void CarregarTexto(ifstream& Arquivo);
        void ImprimirTexto();

};


#endif 