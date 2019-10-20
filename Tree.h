#pragma once
#include "Application.h"

class Branch{
    Point _MainNode;
    Point _EndNode;
    Branch * LBranch = nullptr;
    Branch * RBranch = nullptr; 
    Branch * prevBranch = nullptr;// contains previous branch's data about if L and R branch are null or not
    float length;
    float Angle;
    float Radian(float degree);
    public:
    Branch(Branch *prevBranch);// makes the next brach with prev endpoint and data from previous branch
    Branch(Point rootp, float angle, float len);// Branch() for root. 
    void draw(Window &graphic);//draws a line between two points
    bool ValidLen();// i use this as a way to end recursion. if len is smaller than a certain number,the recursion ends
    void Recursion();// first makes the right and then the left recursion. so we make everything in order.
};