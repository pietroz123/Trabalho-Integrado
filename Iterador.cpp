#include "Iterador.h"

Iterador::Iterador(No *raiz) : Atual(raiz) { }

Iterador::Iterador(const Iterador &Outro) {
    this->Atual = Outro.Atual;
}


No *Min(No *N) {
    while (N->Filho_Esquerdo)
        N = N->Filho_Esquerdo;
    return N;
}
No *Iterador::SucessorEmOrdem(No *N) {
    if (N == NULL)  return NULL;

    if (N->Filho_Direito)
        return Min(N->Filho_Direito);

    else {
        No *Ancestral = N->Pai;
        while (Ancestral) {
            if (Atual == Ancestral->Filho_Esquerdo)
                return Ancestral;
            else if (Atual == Ancestral->Filho_Direito) {
                Atual = Ancestral;
                Ancestral = Ancestral->Pai;
            }
        }
    }
    return NULL;
}

bool Iterador::operator==(const Iterador &Outro) {
    return Atual == Outro.Atual;
}

bool Iterador::operator!=(const Iterador &Outro) {
    return !(Atual == Outro.Atual);
}

Palavra &Iterador::operator*() const {
    return Atual->P;
}

Iterador Iterador::operator++() {
    Atual = SucessorEmOrdem(Atual);
    return Iterador(Atual);
}

Iterador Iterador::operator++(int n) {
    Iterador Temp = *this;
    Atual = SucessorEmOrdem(Atual);
    return Temp;
}

Iterador Iterador::operator--() {

}

Iterador Iterador::operator--(int n) {

}