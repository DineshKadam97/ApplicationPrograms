#include "../Headers/Point3D.h"
#include "../Headers/Reader.h"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
 
Reader ::Reader(std::string filepath)
{
    mfilePath=filepath;
}
 
Reader::~Reader()
{
 
}
 
void Reader::getTriangles(std :: vector<Triangle> &triangles) 
{
    std::ifstream dataFile;
    dataFile.open(mfilePath);
 
    if (!dataFile.is_open()) 
    {
        std::cout<<"File not exist"<<std::endl;
        return ;
    }
 
    std::string line;
 
    while (std::getline(dataFile, line)) 
    {
        if (line.find("vertex") != std::string::npos) 
        {
            std::istringstream iss(line);
            std::string token;
            float x, y, z;
            iss >> token >> x >> y >> z;
            cout<<x<<" "<<y<<" "<<z<<endl;
            Point3D Point1(x, y, z);

            getline(dataFile,line);
            iss >> token >> x >> y >> z;
            Point3D Point2(x, y, z);
            
            getline(dataFile,line);
            iss >> token >> x >> y >> z;
            Point3D Point3(x, y, z);               
        }
    }
 
    dataFile.close();
    return;
}