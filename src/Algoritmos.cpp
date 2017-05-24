#include "Algoritmos.h"
//#include "Solucion.h"
#include <iostream>
#include <vector>

using namespace std;


Solucion AlgorimoGreedyBinPacking(Problema p){
  Solucion S;
  vector<pair<int,double> > candidatos(p.getNumObjetos());

  //Inicializamos lista de candidatos
  for (int i = 0; i < p.getNumObjetos(); i++) {
    candidatos[i].first = i;
    candidatos[i].second = p.getVolumen(i);
  }

  //Mientras queden objetos sin incluir en cajas
  while (!candidatos.empty()) {

    //Funcion de seleccion(elemento con el máximo peso)
    vector<pair<int, double> >::iterator it, sol;
    pair<int, double> max(-1,0);

    for (it = candidatos.begin(); it != candidatos.end(); it++) {
      if (max.second < it->second) {
        max = *it;
        sol = it;
      }
    }

    //Eliminacion del objeto elegido de la lista de candidatos
    candidatos.erase(sol);

    //Incluimos el objeto elegido en la solucion
    for (int i = 0; i < S.getNumCajas(); i++) {
      //Si el objeto entra en una caja existente, lo incluimos
      if (S.getVolumen(i) + max.second <= p.getVolumen())
        S.addObjeto(i,max);
      //Si no, creamos una caja nueva con el el objeto
      else
        // Creamos una nueva caja
        S.addCaja(max);
    }

  }

  return S;
}
