#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"
#include "headers/HalfSection.h"

int main()
{
    std::vector<Triangle> triangles;
    Reader reader("D:\\Dinesh\\Sketcher2\\src\\cubeModel.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("D:\\Dinesh\\Sketcher2\\TextFiles\\output.txt", outTriangles);

    // std::cout<<triangles.size()<<std::endl;

    std::cout<<"Press enter to exit\n";
    std::cin.ignore();
    std::cin.get();
}