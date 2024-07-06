#include"../Headers/Writer.h"
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

Writer :: Writer()
{
}

Writer :: ~Writer()
{
}

void Writer :: write(string filepath, vector<Triangle> triangles)
{
    ofstream dataFile;
    dataFile.open(filepath);
}