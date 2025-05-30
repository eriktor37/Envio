//Erik Sebastián Ayala Torres - Matrícula A01277400

#include "Sobre.h"
#include <iostream>
using namespace std;

Sobre::Sobre(string nomRem, string dirRem, string ciuRem, string estRem, string cpRem,
             string nomDest, string dirDest, string ciuDest, string estDest, string cpDest, double costo,
             double l, double a, double cargo)
    : Envio(nomRem, dirRem, ciuRem, estRem, cpRem, nomDest, dirDest, ciuDest, estDest, cpDest, costo) {
    largo = l;
    ancho = a;
    cargoAdicional = cargo;
}

// Verificar si se necesita implementar algún cargo adicional por dimensiones
bool Sobre::necesitaCargo() {
    if (largo > 25.0 || ancho > 30.0) {
        return true;
    } else {
        return false;
    }
}

double Sobre::calculaCosto() {
    double costoTotal = costoEstandar;

    if (necesitaCargo()) {
        costoTotal = costoTotal + cargoAdicional;
    }
    return costoTotal;
}

void Sobre::mostrarDatos() {
    cout << "Dimensiones del sobre:" << endl;
    cout << "Largo: " << largo << " cm" << endl;
    cout << "Ancho: " << ancho << " cm" << endl;
    cout << "Cargo adicional: $" << cargoAdicional << endl;
    if (necesitaCargo()) {
        cout << "ATENCION: Este sobre excede 25x30 cm" << endl;
        cout << "Se aplicara cargo adicional" << endl;
    } else {
        cout << "Sobre dentro de dimensiones normales" << endl;
    }
}