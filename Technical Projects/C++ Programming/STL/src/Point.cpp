#include"../Headers/Point3D.h"

Point3D::Point3D(double inX, double inY, double inZ) : mX(0), mY(0), mZ(0)
{
    mX = inX;
    mY = inY;
    mZ = inZ;
}
Point3D::~Point3D(){}

double Point3D::x(){
    return this->mX;
}

double Point3D::y(){
    return this->mY;
}

double Point3D::z(){
    return this->mZ;
}

void Point3D :: setX(double x)
{

}

void Point3D :: setY(double y)
{

}

void Point3D :: setZ(double z)
{

}