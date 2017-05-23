#include "Solucion.h"

int Solucion::getNumObjetos() {

    return posiciones.size();
}

void Solucion::addObjeto(int pos, int obj, double vol) {

    pair<int,double> p = new pair(obj,vol);
    posiciones[pos].push_back(obj);
}

int Solucion::getVolumen(int pos) {

    double vol = 0;
    for(int i=0; i<posiciones[pos].size(); i++)
        vol += (posiciones[pos][i]).second;
    return vol;
}
