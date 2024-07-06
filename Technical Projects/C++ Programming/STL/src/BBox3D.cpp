#include"../Headers/BBox3D.h"
#include"../Headers/Triangle.h"
#include<vector>
using namespace std;

BBox3D::BBox3D(vector<Triangle> triangles):
mMin(0,0,0),
mMax(0,0,0),
mCenter(0,0,0)
{
    calculateBBOX(triangles);
}

BBox3D::~BBox3D()
{
}

void BBox3D :: calculateBBOX(vector<Triangle> triangles)
{
    Point3D maxPoint(__DBL_MIN__,__DBL_MIN__,__DBL_MIN__);
    Point3D minPoint(__DBL_MAX__,__DBL_MAX__,__DBL_MAX__);

    for(Triangle triangle : triangles)
    {
        Point3D p1 = triangle.p1();
        Point3D p2 = triangle.p2();
        Point3D p3 = triangle.p3();

        compareAndUpdate(p1,minPoint,maxPoint);
        compareAndUpdate(p2,minPoint,maxPoint);
        compareAndUpdate(p3,minPoint,maxPoint);
    }
}

void compareAndUpdate(Point3D pointToCompare, Point3D min, Point3D max)
{
    if(pointToCompare.x() >max.x())
        {
            max.setX(pointToCompare.x());
        }

        if(pointToCompare.y() >max.y())
        {
            max.setY(pointToCompare.y());
        }

        if(pointToCompare.z() >max.z())
        {
            max.setZ(pointToCompare.z());
        }

        if(pointToCompare.x() < min.x())
        {
            min.setX(pointToCompare.x());
        }

        if(pointToCompare.y() < min.y())
        {
            min.setY(p1.y());
        }

        if(p1.z() < min.z())
        {
            min.setZ(p1.z());
        }
}

//tolerance gap
