#include <stdlib.h>
#include <stdio.h>

int main() {
    int p1, p2, p3, p4, mult, nmr, somai, somap, somat, verificador, nmrf;

    printf("Digite o codigo de barras:\n");
    scanf("%d", &nmr);

    p1 = (nmr / 1000) % 10;
    p2 = (nmr / 100) % 10;
    p3 = (nmr / 10) % 10;
    p4 = nmr % 10;

    somai = p1 + p3;
    mult = somai * 3;
    somap = p2 + p4;
    somat = mult + somap;

    verificador = 10 - (somat%10);
	if (verificador == 10)
	verificador = 0;
		
    nmrf = p1 * 10000 + p2 * 1000 + p3 * 100 + p4 * 10 + verificador;

    printf("Digitos seguidos do numero verificador: %d\n", nmrf);

    return 0;
}
