#include"Point3D.h"
#include"Reader.h"
#include<vector>
#include"Triangle.h"

class Writer : public Reader
{
    public:
    Writer();
    ~Writer();

    void write(std :: string filepath, std :: vector<Triangle> triangles);

    private:
    
};