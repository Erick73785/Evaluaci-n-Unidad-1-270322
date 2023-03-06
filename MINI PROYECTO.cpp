#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    const int num_intentos = 5; // número máximo de intentos
    int numero_secreto = rand() % 100 + 1; // número secreto aleatorio entre 1 y 100
    int intentos_restantes = num_intentos; // número de intentos restantes

    cout << "Bienvenido al juego de adivinar el número.\n";
    cout << "Tienes " << num_intentos << " intentos para adivinar el número secreto.\n";
    
    int numero_usuario;
    do {
        cout << "Introduce un numero entre 1 y 100: ";
        cin >> numero_usuario;

        if (numero_usuario == numero_secreto) {
            cout << "¡Felicidades, has adivinado el numero secreto!\n";
            return 0; // salir del programa
        }
        else if (numero_usuario < numero_secreto) {
            cout << "El numero ingresado es menor que el número secreto.\n";
        }
        else {
            cout << "El numero ingresado es mayor que el número secreto.\n";
        }

        intentos_restantes--;
        if (intentos_restantes == 0) {
            cout << "Lo siento, has agotado todos tus intentos.\n";
            cout << "El número secreto era " << numero_secreto << ".\n";
            return 0; // salir del programa
        }
        else {
            cout << "Te quedan " << intentos_restantes << " intentos restantes.\n";
        }
    } while (intentos_restantes > 0);

    return 0;
}
