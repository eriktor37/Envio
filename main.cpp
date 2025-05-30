//Erik Sebastián Ayala Torres - Matrícula A01277400

// main de prueba
#include <iostream>
#include "Envio.h"
#include "Paquete.h"
#include "Sobre.h"

using namespace std;

int main() {
    //Interfáz
    cout << "=== PROGRAMA DE SISTEMA DE ENVIOS (PAQUETERÍAS ERIK) ===" << endl;
    cout << "Erik Sebastian Ayala Torres - A01277400" << endl;
    cout << "=============================================" << endl << endl;
    
    //Objeto de envio básico
    cout << "PRUEBA 1: ENVIO BASICO" << endl;
    Envio envio1("Erik Torres", "Calle 123", "Guadalajara", "Jalisco", "44100",
                 "Felipe Castillo", "Avenida 456", "Monterrey", "Nuevo Leon", "64000", 50.0);
    envio1.mostrarRemitente();
    cout << endl;
    envio1.mostrarDestinatario();
    cout << "Costo del envio: $" << envio1.calculaCosto() << endl;
    cout << "=============================================" << endl << endl;
    
    //Objeto de tipo paquete
    cout << "PRUEBA 2: PAQUETE" << endl;
    Paquete paquete1("Miranda Licona", "Insurgentes 789", "Mexico DF", "CDMX", "03100",
                     "Paloma Soto", "Juarez 321", "Puebla", "Puebla", "72000", 75.0,
                     30.0, 20.0, 15.0, 2.5, 25.0);
    paquete1.mostrarRemitente();
    cout << endl;
    paquete1.mostrarDestinatario();
    cout << endl;
    paquete1.mostrarDatos();
    cout << "Costo del paquete: $" << paquete1.calculaCosto() << endl;
    cout << "=============================================" << endl << endl;
    
    //Objeto de tipo sobre normal
    cout << "PRUEBA 3: SOBRE NORMAL" << endl;
    Sobre sobre1("Gabriel Moises", "Universidad 147", "Tijuana", "Baja California", "22000",
                 "Fernanda Guerrero", "Diaz Ordaz 852", "Cancun", "Quintana Roo", "77500", 30.0,
                 20.0, 25.0, 15.0);
    
    sobre1.mostrarRemitente();
    cout << endl;
    sobre1.mostrarDestinatario();
    cout << endl;
    sobre1.mostrarDatos();
    cout << "Costo del sobre: $" << sobre1.calculaCosto() << endl;
    cout << "=============================================" << endl << endl;
    
    //Objeto de tipo sobre grande
    cout << "PRUEBA 4: SOBRE GRANDE" << endl;
    Sobre sobre2("Fernanda Alcántar", "Valle 963", "San Luis Potosi", "SLP", "78000",
                 "Arturo García", "Hidalgo 741", "Merida", "Yucatan", "97000", 35.0,
                 35.0, 40.0, 20.0);

    sobre2.mostrarRemitente();
    cout << endl;
    sobre2.mostrarDestinatario();
    cout << endl;
    sobre2.mostrarDatos();
    cout << "Costo del sobre grande: $" << sobre2.calculaCosto() << endl;
    cout << "=============================================" << endl << endl;
    
    // Prueba para los valores negativos
    cout << "PRUEBA 5: PAQUETE CON PESO NEGATIVO???" << endl;
    Paquete paquete2("Test User", "Test Dir", "Test City", "Test State", "12345",
                     "Test Dest", "Test Dir 2", "Test City 2", "Test State 2", "67890", 40.0,
                     25.0, 30.0, 20.0, -1.5, -5.0); // Valores negativos para probar validacion
    
    cout << "Costo del paquete con validacion: $" << paquete2.calculaCosto() << endl;
    cout << "=============================================" << endl << endl;
    return 0;
}