#ifndef SOLUCION_H
#define SOLUCION_H

#include "Problema.h"
#include <vector>

class Solucion
{
    private:

    vector<vector<pair<int,double> > > posiciones;

    public:
/*
    Solucion();
    Solucion(const Solucion & s);
    ~Solucion();
    Solucion & operator=(const Solucion & s);
*/
    int getNumCajas();
    void addCaja(pair<int, double> obj);
    void addObjeto(int pos, pair<int, double> obj);
    int getVolumen(int pos);
    vector<pair<int, double> > getObjetos(int caja);

};

#endif
