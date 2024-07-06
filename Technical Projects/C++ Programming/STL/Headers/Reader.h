#pragma once
#include <vector>
#include <string>
#include "Triangle.h"
 
class Reader {
public:
    Reader(std::string filepath);
    ~Reader();
 
    void getTriangles(std :: vector<Triangle> &triangles);
 
private:
    std::string mfilePath;
};