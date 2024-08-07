#pragma once
#include"Point3D.h"

class Triangle
{
    public:
        Triangle(int inIdxP1, int inIdxP2, int inIdxP3);
        ~Triangle();
    
        void setNormal(int inNormal);

    private:
        int mIdxP1;
        int mIdxP2;
        int mIdxP3;
        int mNormal;
};