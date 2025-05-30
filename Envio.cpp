//Erik Sebastián Ayala Torres - Matrícula A01277400

#include "Envio.h"
#include <iostream>
using namespace std;

Envio::Envio(string nomRem, string dirRem, string ciuRem, string estRem, string cpRem,
             string nomDest, string dirDest, string ciuDest, string estDest, string cpDest, double costo) {
    nombreRemitente = nomRem;
    direccionRemitente = dirRem;
    ciudadRemitente = ciuRem;
    estadoRemitente = estRem;
    codigoPostalRemitente = cpRem;
    nombreDestinatario = nomDest;
    direccionDestinatario = dirDest;
    ciudadDestinatario = ciuDest;
    estadoDestinatario = estDest;
    codigoPostalDestinatario = cpDest;
    costoEstandar = costo;
}

double Envio::calculaCosto() {
    return costoEstandar;
}

void Envio::mostrarRemitente() {
    cout << "Remitente: " << nombreRemitente << endl;
    cout << "Direccion: " << direccionRemitente << endl;
    cout << "Ciudad: " << ciudadRemitente << ", " << estadoRemitente << " " << codigoPostalRemitente << endl;
}

void Envio::mostrarDestinatario() {
    cout << "Destinatario: " << nombreDestinatario << endl;
    cout << "Direccion: " << direccionDestinatario << endl;
    cout << "Ciudad: " << ciudadDestinatario << ", " << estadoDestinatario << " " << codigoPostalDestinatario << endl;
}