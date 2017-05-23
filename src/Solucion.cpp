#include "Solucion.h"

int Solucion::getNumObjetos() {

    return posiciones.size();
}

void Solucion::addObjeto(int pos, double vol) {

    posiciones[pos].push_back(vol);
}

int Solucion::getVolumen(int pos) {

    double vol = 0;
    for(int i=0; i<posiciones[pos].size(); i++)
        vol += posiciones[pos][i];
    return vol;
}
