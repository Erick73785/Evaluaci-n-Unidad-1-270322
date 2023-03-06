#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    const int num_intentos = 5; // n�mero m�ximo de intentos
    int numero_secreto = rand() % 100 + 1; // n�mero secreto aleatorio entre 1 y 100
    int intentos_restantes = num_intentos; // n�mero de intentos restantes

    cout << "Bienvenido al juego de adivinar el n�mero.\n";
    cout << "Tienes " << num_intentos << " intentos para adivinar el n�mero secreto.\n";
    
    int numero_usuario;
    do {
        cout << "Introduce un numero entre 1 y 100: ";
        cin >> numero_usuario;

        if (numero_usuario == numero_secreto) {
            cout << "�Felicidades, has adivinado el numero secreto!\n";
            return 0; // salir del programa
        }
        else if (numero_usuario < numero_secreto) {
            cout << "El numero ingresado es menor que el n�mero secreto.\n";
        }
        else {
            cout << "El numero ingresado es mayor que el n�mero secreto.\n";
        }

        intentos_restantes--;
        if (intentos_restantes == 0) {
            cout << "Lo siento, has agotado todos tus intentos.\n";
            cout << "El n�mero secreto era " << numero_secreto << ".\n";
            return 0; // salir del programa
        }
        else {
            cout << "Te quedan " << intentos_restantes << " intentos restantes.\n";
        }
    } while (intentos_restantes > 0);

    return 0;
}
