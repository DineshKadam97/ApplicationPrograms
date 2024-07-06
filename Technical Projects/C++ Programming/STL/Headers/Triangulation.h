#pragma once
#include<vector>
#include"Triangle.h"
#include"BBox3D.h"

using namespace std;

class Triangulation
{   
  public:
    Triangulation(vector<Triangle> Triangles);
    ~Triangulation();

    vector<Triangle> getTriangles();

  private:
    vector<Triangle> mTriangles;
    BBox3D mBox;
};
