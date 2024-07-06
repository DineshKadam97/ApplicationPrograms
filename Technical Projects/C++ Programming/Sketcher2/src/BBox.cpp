#include<iostream>
#include "../headers/BBox.h"
#include "../headers/Triangle.h"
#include "../headers/Point3D.h"
#include"../headers/Writer.h"
#include"../headers/HalfSection.h"
#include<fstream>
#include<string>
#include<vector>

using namespace std;

BBox::BBox(std::vector<Triangle> triangles)
:mMin(0,0,0),
mMax(0,0,0),
mCenter(0,0,0)
{
    calculateBBox(triangles);
}

BBox::~BBox()
{
}

void BBox::calculateBBox(std::vector<Triangle> triangles)
{

   mMax = Point3D(__DBL_MIN__,__DBL_MIN__,__DBL_MIN__);
   mMin = Point3D(__DBL_MAX__,__DBL_MAX__,__DBL_MAX__);

   for(Triangle triangle:triangles)
   {
      Point3D p1=triangle.p1();
      Point3D p2=triangle.p2();
      Point3D p3=triangle.p3();

      compareAndUpdate(p1, mMin, mMax);
      compareAndUpdate(p2, mMin, mMax);
      compareAndUpdate(p3, mMin, mMax);
   }

   mCenter = Point3D((4*mMin.x()+ 4*mMax.x())/8, (4 * mMin.y()+ 4 * mMax.y())/8, (4 * mMin.z()+ 4*mMax.z())/8);

   vector<Point3D> points;
   Point3D p1(mMin.x(), mMin.y(), mMin.z());
   points.push_back(p1);

   Point3D p2(mMax.x(), mMin.y(), mMin.z());
   points.push_back(p2);

   Point3D p3(mMax.x(), mMax.y(), mMin.z());
   points.push_back(p3);

   Point3D p4(mMin.x(), mMax.y(), mMin.z());
   points.push_back(p4);

   Point3D p5(mMin.x(), mMin.y(), mMin.z());
   points.push_back(p5);

   Point3D p6(mMin.x(), mMin.y(), mMax.z());
   points.push_back(p6);

   Point3D p7(mMax.x(), mMin.y(), mMax.z());
   points.push_back(p7);

   Point3D p8(mMax.x(), mMin.y(), mMin.z());
   points.push_back(p8);

   Point3D p9(mMax.x(), mMax.y(), mMin.z());
   points.push_back(p9);

   Point3D p10(mMax.x(), mMax.y(), mMax.z());
   points.push_back(p10);

   Point3D p11(mMax.x(), mMin.y(), mMax.z());
   points.push_back(p11);

   Point3D p12(mMax.x(), mMax.y(), mMax.z());
   points.push_back(p12);

   Point3D p13(mMin.x(), mMax.y(), mMax.z());
   points.push_back(p13);

   Point3D p14(mMin.x(), mMin.y(), mMax.z());
   points.push_back(p14);

   Point3D p15(mMin.x(), mMax.y(), mMax.z());
   points.push_back(p15);

   Point3D p16(mMin.x(), mMax.y(), mMin.z());
   points.push_back(p16);

   Point3D p17(mCenter.x(), mCenter.y(), mCenter.z());
   points.push_back(p17);
   
   Writer wobj;
   wobj.write("D:\\Dinesh\\Sketcher2\\TextFiles\\BoundingBox.txt",points);

   double offset=(mMax.x()-mMin.x())/4;

   HalfSection hobj;
   hobj.createHalfSection(triangles,mCenter,offset);
}

void BBox::compareAndUpdate(Point3D pointToCompare, Point3D& min, Point3D& max)
{
      if(pointToCompare.x()>max.x())
          max.setX(pointToCompare.x());

      if(pointToCompare.y()>max.y())
          max.setY(pointToCompare.y());

      if(pointToCompare.z()>max.z())
          max.setZ(pointToCompare.z());

      if(pointToCompare.x()<min.x())
          min.setX(pointToCompare.x());

      if(pointToCompare.y()<min.y())
          min.setY(pointToCompare.y());

      if(pointToCompare.z()<min.z())
          min.setZ(pointToCompare.z());
}
