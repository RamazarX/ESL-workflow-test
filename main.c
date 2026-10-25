#include <stdio.h>
#include "Vector3D.h"

int main() {
    Vector3D v1 = {1.0, 2.5, 3.2};
    Vector3D v2 = {3.0, 1.0, 2.0};
    printf("v1 = {%.2f, %.2f, %.2f}\n", v1.x, v1.y, v1.z);
    printf("v2 = {%.2f, %.2f, %.2f}\n", v2.x, v2.y, v2.z);
    Vector3D sum = add(v1, v2);
    printf("Cложение\n");
    printf("{%.2f, %.2f, %.2f}\n", sum.x, sum.y, sum.z);
    Vector3D v3 = sub(v1, v2);
    printf("вычитание\n");
    printf("{%.2f, %.2f, %.2f}", v3.x, v3.y, v3.z);
    printf("\n");
    double dot = scalar_multiply(v1, v2);
    printf("Скалярное произведение\n");
    printf("%.2f\n", dot);
    Vector3D v4 = cross_multiply(v1, v2);
    printf("Векторное произведение\n");
    printf("{%.2f, %.2f, %.2f}\n", v4.x, v4.y, v4.z);
    return 0;
}