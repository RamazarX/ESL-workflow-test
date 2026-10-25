#include "Vector3D.h"

Vector3D add(Vector3D v, const Vector3D other)
{
	Vector3D result;
    result.x = v.x + other.x;
    result.y = v.y + other.y;
    result.z = v.z + other.z;
	return result;
}

Vector3D sub(Vector3D v, const Vector3D other)
{
	Vector3D result;
    result.x = v.x - other.x;
    result.y = v.y - other.y;
    result.z = v.z - other.z;
	return result;
}

double scalar_multiply(const Vector3D v, const Vector3D other)
{
	return v.x * other.x + v.y * other.y + v.z * other.z;
}
Vector3D cross_multiply(Vector3D v, const Vector3D other)
{
    Vector3D result;
    result.x = v.y * other.z - v.z * other.y;
    result.y = v.z * other.x - v.x * other.z;
    result.z = v.x * other.y - v.y * other.x;
    return result;
}