#include <stdio.h>
#include <math.h>

double lengthvector (int x1, int y1, int x2, int y2) {
    int dx=x2-x1;
    int dy=y2-y1;
    double length=sqrt((dx*dx)+(dy*dy));
    return length;
}

int main() {

    printf("Zaichenko Bohdan IPZ-22008b\n");

    int x1, y1, x2, y2;
    printf("\nInput coordinates vector (x1, y1, x2, y2): \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double result=lengthvector(x1, y1, x2, y2);
    printf("\nLenght vector: %.6f\n", result);

    return 0;
}
