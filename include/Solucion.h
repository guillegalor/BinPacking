#ifndef SOLUCION_H
#define SOLUCION_H

#include "Problema.h"
#include <vector>


class Solucion
{
    private:

    vector<vector<double> > posiciones;

    public:

    Solucion();
    Solucion(const Solucion & s);
    ~Solucion();
    Solucion & operator=(const Solucion & s);

    int getNumObjetos();
    void addObjeto(int pos, double vol);
    int getVolumen(int pos);

};
