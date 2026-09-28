// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Variables (siempre inicializadas)
          double ancho = 0.0;
          double alto = 0.0;
          double area = 0.0;
          double perimetro = 0.0;

    std::cout << "Area y perimetro de un rectangulo\n";

    // 2. Entrada: el ancho
    std::cout << "Ingresa el ancho: ";
    ancho = leerDecimal("Ancho: ");
    while (ancho <= 0) {
    std::cout << "El ancho debe ser mayor que 0.\n";
    ancho = leerDecimal("Ancho: ");
}




    // 3. Entrada: el alto
   std::cout << "Ingresa el alto: ";
   alto = leerDecimal("Alto: ");

    while (alto <= 0) {
    std::cout << "El alto debe ser mayor que 0.\n";
    alto = leerDecimal("Alto: ");
}

    // 4. Proceso
     area = ancho * alto;
     perimetro = 2 * (ancho + alto);

    // 5. Salida
     std::cout << "Area: " << area << " cm2\n";
     std::cout << "Perimetro: " << perimetro << " cm\n";

    // ¿Qué significa return 0;?
    return 0;
}