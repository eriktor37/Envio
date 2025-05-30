//Erik Sebastián Ayala Torres - Matrícula A01277400

#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.h"

class Sobre : public Envio {
private:
    // Datos sobre
    double largo;
    double ancho;
    double cargoAdicional;
public:
    Sobre(string nomRem, string dirRem, string ciuRem, string estRem, string cpRem,
          string nomDest, string dirDest, string ciuDest, string estDest, string cpDest, double costo,
          double l, double a, double cargo);
    double calculaCosto();
    void mostrarDatos();
    bool necesitaCargo();
};

#endif