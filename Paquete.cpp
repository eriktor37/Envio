//Erik Sebastián Ayala Torres - Matrícula A01277400

#include "Paquete.h"
#include <iostream>
using namespace std;

Paquete::Paquete(string nomRem, string dirRem, string ciuRem, string estRem, string cpRem,
                 string nomDest, string dirDest, string ciuDest, string estDest, string cpDest, double costo,
                 double l, double a, double p, double ps, double costoPorKg)
    : Envio(nomRem, dirRem, ciuRem, estRem, cpRem, nomDest, dirDest, ciuDest, estDest, cpDest, costo) {
    // Validadción para que el peso sean solo valores positivos
    if (ps > 0) {
        peso = ps;
    } else {
        peso = 1.0; // Valor asignado a 1 kg por defecto
        cout << "Peso debe ser positivo, se asigno 1.0 kg" << endl;
    }
    if (costoPorKg > 0) {
        costoPorKilogramo = costoPorKg;
    } else {
        costoPorKilogramo = 10.0; // Valor de $10 por 1 kg por defecto
        cout << "Costo por kg debe ser positivo, se asigno $10.0" << endl;
    }
    largo = l;
    ancho = a;
    profundidad = p;
}

double Paquete::calculaCosto() {
    return costoEstandar + (peso * costoPorKilogramo);
}

void Paquete::mostrarDatos() {
    cout << "Dimensiones del paquete:" << endl;
    cout << "Largo: " << largo << " cm" << endl;
    cout << "Ancho: " << ancho << " cm" << endl;
    cout << "Profundidad: " << profundidad << " cm" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Costo por kilogramo: $" << costoPorKilogramo << endl;
}