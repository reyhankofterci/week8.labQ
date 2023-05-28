#include <stdlib.h>
#include <stdio.h>



struct Complex
{
    float real;
    float imaginer;
};

    struct Complex;
    struct Complex addComplex(struct Complex sayi1, struct Complex sayi2);


int main()
{
    struct Complex sayi1, sayi2, toplam;

    printf("enter the real part of the complex number 1 : ");
    scanf("%f", &sayi1.real);

    printf("enter the imaginer part of the complex number 1 : ");
    scanf("%f", &sayi1.imaginer);

    printf("enter the real part of the complex number: 2 ");
    scanf("%f", &sayi2.real);

    printf("enter the imaginer part of the complex number: 2 ");
    scanf("%f", &sayi2.imaginer);


    toplam = addComplex(sayi1, sayi2);

    printf("result: %.2f + %.2fi\n", toplam.real,toplam.imaginer);

    return 0;
}


struct Complex addComplex(struct Complex sayi1, struct Complex sayi2)
{
    struct Complex result;

    result.real = sayi1.real + sayi2.real;
    result.imaginer = sayi1.imaginer + sayi2.imaginer;

    return result;
}
