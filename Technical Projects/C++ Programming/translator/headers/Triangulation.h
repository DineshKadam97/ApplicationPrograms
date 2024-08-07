#pragma once
#include"TypeDef.h"
 
class Triangulation
{
    public:
        Triangulation();
        ~Triangulation();
 
        TriangleList triangles();
        PointList points();
        PointList normals();
       
        void addTriangle(Point3D p1, Point3D p2, Point3D p3, Point3D normal);
    
    private:
        int Triangulation::getVIndex(Point3D point);
        int Triangulation::getNIndex(Point3D point);

    private:
        TriangleList mTriangles;
        PointList mPoints;
        PointList mNormals;
};