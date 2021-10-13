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
    // Añado un filtro: los datos tienen que estar entre 1 y 50.
    const int MIN=1;
    const int MAX=50;

    // Repetimos el mismo proceso durante 5 veces.
    const int NUM_VECES = 5;

    // Contamos las veces que coinciden
    int num_coincidencias = 0;

    // Iniciamos el proceso.
    for( int i=0; i<NUM_VECES; ++i ) {
        cout << "Comprobación " << (i+1) << " de " << NUM_VECES << endl << endl;
        do {
            cout << "Jugador número 1, indique un número entre " << MIN << " y " << MAX << ": ";
            cin >> num1;
        } while ( num1<MIN || num1>MAX );

        do {
            cout << "Jugador número 2, indique un número entre " << MIN << " y " << MAX << ": ";
            cin >> num2;
        } while ( num2<MIN || num2>MAX );


        // Compruebo si coinciden
        if( num1==num2 ) {
            ++num_coincidencias;
            cout << "Habéis coincidido.";
        } else {
            cout << "No habéis coincidido.";
        }
        cout << endl << endl;
    }

    // Imprimimos el porcentaje de compatibilidad.

    cout << "Habéis coincidido " << num_coincidencias << " de " << NUM_VECES << " pruebas." << endl;
    cout << "Eso da un porcentaje de compatibilidad del " << (double)num_coincidencias/NUM_VECES*100 << "%" << endl;
    // Fin del programa.
    cout << "Fin del programa"<<endl;
    return 0;
}