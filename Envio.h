//Erik Sebastián Ayala Torres - Matrícula A01277400

#ifndef ENVIO_H
#define ENVIO_H

#include <string>
using namespace std;

class Envio {
protected:
    // Datos remitente
    string nombreRemitente;
    string direccionRemitente;
    string ciudadRemitente;
    string estadoRemitente;
    string codigoPostalRemitente;
    // Datos destinatario
    string nombreDestinatario;
    string direccionDestinatario;
    string ciudadDestinatario;
    string estadoDestinatario;
    string codigoPostalDestinatario;
    double costoEstandar;  // Costo estandar x envio
public:
    Envio(string nomRem, string dirRem, string ciuRem, string estRem, string cpRem,
          string nomDest, string dirDest, string ciuDest, string estDest, string cpDest, double costo);
    virtual double calculaCosto();  // Función calcular costo
    void mostrarRemitente();
    void mostrarDestinatario();
};
#endif