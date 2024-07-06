#pragma once
#include<vector>
#include"Triangle.h"

using namespace std;

class BBox3D
{

public:
    BBox3D(vector<Triangle>);
    ~BBox3D();

private:
    Point3D mMin;
    Point3D mMax;
    Point3D mCenter;

    void calculateBBOX(vector<Triangle>);
    void compareAndUpdate(Point3D refp, Point3D min, Point3D max);
};
