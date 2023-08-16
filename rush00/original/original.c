#include <stdio.h>
#include <unistd.h>

void techo_y_base(int x) {
    if (x == 1) {
        printf("A");
    } else if (x == 2) {
        printf("AC");
    } else {
        printf("A");
        int contador = 2;
        while (contador < x) {
            printf("B");
            contador++;
        }
        printf("C");
    }
}

void paredes(int x) {
    if (x == 1) {
        printf("B");
    } else if (x == 2) {
        printf("BB");
    } else {
        printf("B");
        int contador = 2;
        while (contador < x) {
            printf(" ");
            contador++;
        }
        printf("B");
    }
}

void rush(int x, int y) {
	if (x == 1 && y == 1) {
		techo_y_base(x);
	}

    else if (x == 1) {
        techo_y_base(x);

        printf("\n");
        
        if (y > 1) {
            int contador = 2;
            while (contador < y) {
                printf("B");
                contador++;
                printf("\n");
            }
        }

        techo_y_base(x);

    
	} else if (x == 2 && y == 1) {
        techo_y_base(x);

    } else if (x == 2) {
        techo_y_base(x);
        printf("\n");
        techo_y_base(x);

    } else if (x > 2) {
        techo_y_base(x);
        printf("\n");
        
        int contador = 2;
        while (contador < y) {
            paredes(x);
            contador++;
            printf("\n");
        }
        
        if (y > 1) {
            techo_y_base(x);
        }
    }
}

int main() {
    int x = 4; // You can change the values of x and y as needed
    int y = 4;
    
    rush(x, y);
    
    return 0;
}