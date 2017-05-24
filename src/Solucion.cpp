#include "Solucion.h"

int Solucion::getNumCajas() {

    return posiciones.size();
}

void Solucion::addObjeto(int pos, pair<int, double> obj) {
    posiciones[pos].push_back(obj);
}

void Solucion::addCaja(pair<int, double> obj){
    posiciones.resize(posiciones.size()+1);
    posiciones[posiciones.size()-1].push_back(obj);
}
int Solucion::getVolumen(int pos) {
    double vol = 0;
    for(unsigned i=0; i<posiciones[pos].size(); i++)
        vol += (posiciones[pos][i]).second;
    return vol;
}

vector<pair<int, double> > Solucion::getObjetos(int caja){
    return posiciones[caja];
}
