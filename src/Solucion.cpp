#include "Solucion.h"

int Solucion::getNumCajas() {

    return posiciones.size();
}

void Solucion::addObjeto(int pos, pair<int, double> obj) {
    posiciones[pos].push_back(obj);
}

int Solucion::getVolumen(int pos) {
    double vol = 0;
    for(int i=0; i<posiciones[pos].size(); i++)
        vol += (posiciones[pos][i]).second;
    return vol;
}

void Solucion::crearCaja(pair<int, double> obj){
    candidatos.resize(candidatos.size+1);
    candidatos[candidatos.size-1].push_back(obj);
}
