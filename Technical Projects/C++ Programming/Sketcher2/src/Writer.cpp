#include<fstream>
#include "../headers/Writer.h"
#include"../headers/Point3D.h"

using namespace std;

Writer::Writer(/* args */)
{
}

Writer::~Writer()
{
}

void Writer::write(std::string filePath ,std::vector<Triangle>& triangles)
{
  std::ofstream dataFile;
  dataFile.open(filePath);
  
  for (Triangle triangle:triangles)
  {
      dataFile << triangle.p1().x() << " " << triangle.p1().y() << " "<< triangle.p1().z() << std::endl;
      dataFile << triangle.p2().x() << " " << triangle.p2().y() << " "<< triangle.p2().z() << std::endl;
      dataFile << triangle.p3().x() << " " << triangle.p3().y() << " "<< triangle.p3().z() << std::endl;
      dataFile << triangle.p1().x() << " " << triangle.p1().y() << " "<< triangle.p1().z() << std::endl;
  }
  dataFile.close();
}

void Writer::write(std::string filePath ,std::vector<Point3D>& points)
{
  std::ofstream dataFile;
  dataFile.open(filePath);
  
  for (Point3D point:points)
  {
      dataFile << point.x() << " " << point.y() << " "<< point.z() << std::endl;
     
  }
  dataFile.close();
}