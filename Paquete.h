//Erik Sebastián Ayala Torres - Matrícula A01277400

#ifndef PAQUETE_H
#define PAQUETE_H

#include "Envio.h"

class Paquete : public Envio {
private:
    // Datos paquete
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costoPorKilogramo;
public:
    Paquete(string nomRem, string dirRem, string ciuRem, string estRem, string cpRem,
            string nomDest, string dirDest, string ciuDest, string estDest, string cpDest, double costo,
            double l, double a, double p, double ps, double costoPorKg);
    double calculaCosto();
    void mostrarDatos();
};

#endif