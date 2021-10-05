/**
 * @file main.cpp
 * @desc "Test de compatibilidad": Ejemplo de uso de estructuras de control
 * @date 04-oct-2021.
 * @author Victor Rivas. <vrivas@ujaen.es>
 */
#include <iostream>
using namespace std;

/// Pedimos un número a cada uno de los jugadores e indicamos si han coincidido o no.
int main() {
    // Declaración de las variables
    int num1, num2;

    // Pido los datos de entrada
    cout << "Jugador número 1, indique un número: ";
    cin >> num1;

    cout << "Jugador número 2, indique un número: ";
    cin >> num2;


    // Compruebo si coinciden
    if( num1==num2 ) {
        cout << "Habéis coincidido: sois compatibles"<<endl;
    } else {
        cout << "No habéis coincidido: sois incompatibles"<<endl;
    }

    // Fin del programa.
    cout << "Fin del programa"<<endl;
    return 0;
}