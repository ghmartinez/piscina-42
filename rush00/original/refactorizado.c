#include <unistd.h>

void imprimir_caracter(char ch, int cantidad) {
    int i = 0;
    while (i < cantidad) {
        write(1, &ch, 1);
        i++;
    }
}

void dibujar_arriba_y_abajo(int ancho) 
{
    imprimir_caracter('A', 1);
    if (ancho > 1) 
    {
        imprimir_caracter('B', ancho - 2);
        imprimir_caracter('C', 1);
    }
    write(1, "\n", 1);
}

void dibujar_medio(int ancho) {
    imprimir_caracter('B', 1);
    if (ancho > 1) {
        imprimir_caracter(' ', ancho - 2);
        imprimir_caracter('B', 1);
    }
    write(1, "\n", 1);
}

void rush(int x, int y) {
    if (x >= 1 && y >= 1) {
        dibujar_arriba_y_abajo(x);
    }

    int i = 0;
    while (i < y - 2) {
        dibujar_medio(x);
        i++;
    }

    if (y >= 2) {
        dibujar_arriba_y_abajo(x);
    }
}

int main() {
    int x = 0; // Puedes cambiar los valores de x e y según sea necesario
    int y = 5;

    rush(x, y);

    return 0;
}