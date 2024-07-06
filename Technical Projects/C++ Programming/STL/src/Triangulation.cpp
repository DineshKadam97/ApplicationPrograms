#include"../Headers/Triangulation.h"
#include"../Headers/BBox3D.h"
using namespace std;

Triangulation :: Triangulation(vector<Triangle> Triangles)
:mBox(Triangles)
{
    mTriangles = Triangles;
}

Triangulation :: ~Triangulation(){}