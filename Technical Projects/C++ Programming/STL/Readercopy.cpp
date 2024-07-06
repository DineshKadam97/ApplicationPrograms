#include "../Headers/Point3D.h"
#include "../Headers/Reader.h"
#include <iostream>
#include <sstream>
#include <fstream>
 
Reader ::Reader(std::string loc){
    filePath=loc;
}
 
Reader::~Reader(){
 
}
 
std::vector<Point3D> Reader::getPointCloud() {
    std::ifstream dataFile;
    std::vector<Point3D> Point3DCloud;
    dataFile.open(filePath);
 
    if (!dataFile.is_open()) {
        std::cout<<"File not exist"<<std::endl;
        return Point3DCloud;
    }
 
    std::string line;
 
    while (std::getline(dataFile, line)) {
        if (line.find("vertex") != std::string::npos) {
            std::istringstream iss(line);
            std::string token;
            float x, y, z;
            iss >> token >> x >> y >> z;
            Point3D Point3D(x, y, z);
            Point3DCloud.push_back(Point3D);
        }
    }
 
    dataFile.close();
    return Point3DCloud;
}