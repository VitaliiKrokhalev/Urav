#include <math.h>
#include <stdio.h>
#include <stdlib.h>

 
void urav(int a, int b, int c, double D, double *x1, double *x2)
{
    printf ("Введите значение a: ");
    scanf ("%d", &a);
    printf ("Введите значение b: ");
    scanf  ("%d", &b);
    printf ("Введите значение c: ");
    scanf ("%d", &c);
    D = (b*b - 4*a*c)
    if(D >= 0) //Если дискриминант больше или равен 0
    {
        *x1 = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        printf ("Первый корень: %d \n", x1);  
        *x2 = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        printf ("Второй корень: %d \n", x2);
    }
    else
    {
        printf ("Дискриминант меньше 0, корни невещественные.");
    }
    return 0;
}