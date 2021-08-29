#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("isless(2.0,1.0)      = %d\n", isless(2.0, 1.0));
    printf("isless(1.0,2.0)      = %d\n", isless(1.0, 2.0));
    printf("isless(INFINITY,1.0) = %d\n", isless(INFINITY, 1.0));
    printf("isless(1.0,NAN)      = %d\n", isless(1.0, NAN));

    _getch();
    return 0;
}