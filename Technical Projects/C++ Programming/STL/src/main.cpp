#include<iostream>
#include"../Headers/Reader.h"
#include<vector>
#include"../Headers/Triangle.h"

using namespace std;

int main()
{
    vector<Triangle> triangles;

    Reader r("solid_CubeModel.stl");

    r.getTriangles(triangles);

    cout<<triangles.size()<<endl;

    cout<<"Press enter to exit"<<endl;

    cin.ignore();
    cin.get();
}