//Antonio Rivera, Diego Colon y Janlexi Agosto
//COMP.LOGIC PROGRAMMING
//Proyecto Integrador 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
int main() {
    float dinero;
    int opcion;
    char si;

    cout << "Bienvenido a la maquina expendedora \n";
    cout << "Ingresa la cantidad de dinero: $";
    cin >> dinero;

    cout << "------------------------------------------------------------- \n";

    do {
        bool articuloTrancado = false;
        string codigo;
        float precio = 0;

        cout << "=== Maquina de Snacks ===" << "\n";
        cout << "1. Comprar papitas" << "\n";
        cout << "2. Comprar galletas" << "\n";
        cout << "3. Comprar dulces" << "\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        
        if (opcion == 1) {
            cout << "Usted selecciono papitas." << "\n";
            articuloTrancado = true;  // 
        } else if (opcion == 2) {
            cout << "Usted selecciono galletas." << "\n";
        } else if (opcion == 3) {
            cout << "Usted selecciono dulces." << "\n";
        } else {
            cout << "Opcion invalida." << "\n";
        }

        
    

     
        cout << "Entre el codigo del producto: ";
        cin >> codigo;

        codigo[0] = toupper(codigo[0]);

   
        if (codigo == "A1") { cout << "Papas Lays - $1.25\n"; precio = 1.25; }
        else if (codigo == "A2") { cout << "Ruffles - $1.25\n"; precio = 1.25; }
        else if (codigo == "A3") { cout << "Funions - $1.25\n"; precio = 1.25; }
        else if (codigo == "A4") { cout << "Doritos - $1.25\n"; precio = 1.25; }
        else if (codigo == "A5") { cout << "Lays de Barbecue - $1.25\n"; precio = 1.25; }

        else if (codigo == "B1") { cout << "Fritos - $1.25\n"; precio = 1.25; }
        else if (codigo == "B2") { cout << "Twisters - $1.25\n"; precio = 1.25; }
        else if (codigo == "B3") { cout << "Oreos - $1.10\n"; precio = 1.10; }
        else if (codigo == "B4") { cout << "Cameos - $1.10\n"; precio = 1.10; }
        else if (codigo == "B5") { cout << "Honey Buns - $1.10\n"; precio = 1.10; }

        else if (codigo == "C1") { cout << "Baked Lays - $1.25\n"; precio = 1.25; }
        else if (codigo == "C2") { cout << "Baked Lays de Barbecue - $1.25\n"; precio = 1.25; }
        else if (codigo == "C3") { cout << "Lays Sour Cream & Onions - $1.25\n"; precio = 1.25; }
        else if (codigo == "C4") { cout << "Smartfood Popcorn - $1.25\n"; precio = 1.25; }
        else if (codigo == "C5") { cout << "Hershey's - $1.75\n"; precio = 1.75; }

        else if (codigo == "D1") { cout << "Hershey's Cookies 'n' Cream - $1.75\n"; precio = 1.75; }
        else if (codigo == "D2") { cout << "Knotis Raspberry Cookies - $1.10\n"; precio = 1.10; }
        else if (codigo == "D3") { cout << "M&M's Chocolate - $1.75\n"; precio = 1.75; }
        else if (codigo == "D4") { cout << "Peanut Butter M&M's - $1.75\n"; precio = 1.75; }
        else if (codigo == "D5") { cout << "Snicker's - $1.75\n"; precio = 1.75; }

        else if (codigo == "E1") { cout << "Chip's Ahoy - $1.10\n"; precio = 1.10; }
        else if (codigo == "E2") { cout << "Twix - $1.75\n"; precio = 1.75; }
        else if (codigo == "E3") { cout << "Reese's - $1.75\n"; precio = 1.75; }
        else if (codigo == "E4") { cout << "Vanilla Oreos - $1.75\n"; precio = 1.75; }
        else if (codigo == "E5") { cout << "Sun Chips Cheddar - $1.25\n"; precio = 1.25; }

        else {
            cout << "Codigo invalido.\n";
            precio = 0;
        }

       
        if (dinero >= precio && precio > 0) {
            dinero -= precio;
            cout << "Compra realizada con exito!\n";
            cout << "Te queda: $" << dinero << "\n";
        } else if (precio > 0) {
            cout << "Dinero insuficiente.\n";
        }

        if (dinero <= 0) {
            cout << "Te quedaste sin dinero. Gracias por usar la maquina.\n";
            break;
        }

         cout << "------------------------------------------------------------------------ \n";
        cout << "Deseas comprar otra cosa? (s/n): ";
        cin >> si;

    } while (si == 's' || si == 'S');

    cout << "Gracias por usar la maquina.\n";
    cout << "Tu total sobrante es: $" << dinero << "\n";
    
    
    

    
    
return 0;
}
