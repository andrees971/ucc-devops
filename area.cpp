#include <stdio.h>
#include <math.h>

int main()
{

    float areaCuadrado, areaCirculo, areaTriangulo, l1, radio, h, base, sqrAreaCuadrado, sqrAreaTriangulo, sqrAreaCirculo;

    l1 = 5;
    radio = 8;
    h = 9;
    base = 5;
    /*cuadrado*/
    

    areaCuadrado = l1 * l1;
    printf("el area del cuadrado es: %f", areaCuadrado);

    /*Triangulo*/
    areaTriangulo = (base * h) / 2;
    printf("\nel area del triangulo es de: %f", areaTriangulo);

    /*Circulo*/
    areaCirculo = (radio * radio) * 3.14;
    printf("\nEl area del circulo es de: %f", areaCirculo);



    sqrAreaCuadrado = sqrt(areaCuadrado);
    printf("\nLa raiz del area del cuadrado es: %f", sqrAreaCuadrado);

    /*Triangulo*/
    sqrAreaTriangulo = sqrt(areaTriangulo);
    printf("\nLa raiz del del area del triangulo es de: %f", sqrAreaTriangulo);

    /*Circulo*/
    sqrAreaCirculo = sqrt(areaCirculo);
    printf("\nLa raiz del El area del circulo es de: %f", sqrAreaCirculo);
}
