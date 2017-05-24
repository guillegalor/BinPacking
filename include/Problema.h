#ifndef PROBLEMA_H
#define PROBLEMA_H

using namespace std;


class Problema {

    private:

    double V;           // Volumen de los embalajes
    unsigned int N;     // Número de objetos
    double *v;          // Volumenes de los N objetos

    public:

    Problema();
    Problema(const Problema & p);
    Problema & operator=(const Problema &p);
    ~Problema();
    int getNumObjetos();
    double getVolumen();
    double getVolumen(int i);
    bool cargarDesdeFlujo(const char *nombreFichero);
    void prettyPrint();

};

#endif // PROBLEMA_H
