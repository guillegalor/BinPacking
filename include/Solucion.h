#ifndef SOLUCION_H
#define SOLUCION_H

#include "Problema.h"
#include <vector>

class Solucion
{
    private:

    vector<vector<pair<int,double> > > posiciones;

    public:

    Solucion();
    Solucion(const Solucion & s);
    ~Solucion();
    Solucion & operator=(const Solucion & s);

    int getNumCajas();
    void addObjeto(int pos, pair<int, double> obj);
    void crearCaja(pair<int, double> obj);
    int getVolumen(int pos);

};

#endif
