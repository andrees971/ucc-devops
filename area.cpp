#include <stdio.h>
#include <math.h>

int main()
{

    float areaCuadrado, areaCirculo, areaTriangulo, l1, radio, h, base;

    l1 = 5;
    radio = 8;
    h = 9;
    base = 5;
    /*cuadrado*/
    

    areaCuadrado = l1 * l1;
    printf("La raiz del area del cuadrado es: %f", sqrt(areaCuadrado));

    /*Triangulo*/
    areaTriangulo = (base * h) / 2;
    printf("\nLa raiz del del area del triangulo es de: %f", sqrt(areaTriangulo));

    /*Circulo*/
    areaCirculo = (radio * radio) * 3.14;
    printf("\nLa raiz del El area del circulo es de: %f", sqrt(areaCirculo));
}
