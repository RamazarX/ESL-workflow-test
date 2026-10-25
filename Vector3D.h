#define VECTOR3D_H
#include <stdbool.h>

typedef struct{
    double x;
    double y;
    double z;
}Vector3D;
Vector3D add(Vector3D v, const Vector3D other);
Vector3D sub(Vector3D v, const Vector3D other);
double scalar_multiply(const Vector3D v, const Vector3D other);
Vector3D cross_multiply(Vector3D v, const Vector3D other);