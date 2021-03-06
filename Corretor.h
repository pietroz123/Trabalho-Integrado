
/* Corretor.h
*
*  Número do Grupo: 9
*  Membros:
*    → Bianca Gomes Rodrigues    RA: 743512
*    → Pietro Zuntini Bonfim     RA: 743588
* 
* → Classe Corretor (contém um dicionário, um texto e a lista de palavras erradas)
* → Desenvolver um CORRETOR ORTOGRÁFICO, que permita verificação de erros em um TEXTO comparando cada palavra do texto com um DICIONÁRIO
* → Se o corretor encontrar uma palavra que não pertença ao dicionário, será possível:
*	1. Corrigir a palavra
*	2. Ignorar o erro
*	3. Selecionar uma palavra a partir de uma lista de palavras semelhantes
*	4. Adicionar a palavra ao dicionário
* → Ao encontrar uma palavra que não pertença ao dicionário, deverá ser apresentado também a palavra anterior e próxima do texto
* → Todos os erros devem ser armazenados em uma lista de erros (corrigidos ou não) uma única vez, com o número de vezes que o erro ocorreu 
*/


#ifndef CORRETOR_H
#define CORRETOR_H

#include "Texto.h"
#include "Dicionario.h"

class Corretor {

    private:
        Texto T;
        Dicionario D;
		list<Palavra> Erros;

        // Funções Auxiliares
        void Finalizar(list<Palavra> &TextWords, Corretor &C, Texto &T, Dicionario &D);
        void ImprimeContexto(list<Palavra>::iterator Inicio, list<Palavra>::iterator Atual, list<Palavra>::iterator Fim);
        void InicializaTexto(Texto &T);
        void InicializaDicionario(Dicionario &D);
        string RemovePontuacao(Palavra P);
        bool ExistePontuacao(Palavra P, char &c);
        int BuscaErro(Palavra &P, list<Palavra> &Erros);

    public:
        void Compara();
        void GravarErros();

};

#endif 