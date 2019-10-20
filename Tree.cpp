#include"Tree.h"

//===========================================================================================
float Branch::Radian(float degree){
    return degree*PI/180;
}
//--------------------------------------------------------------------------------------------
Branch::Branch(Branch *prev){
    _MainNode = prev->_EndNode;
    prevBranch = prev;
    length = prev->length/1.2;
    Angle = prev->Angle -5;
    //recursion continues
    Recursion();
}
//--------------------------------------------------------------------------------------------
Branch::Branch(Point endp, float angle, float len){
    _MainNode = endp;
    Angle = Radian(angle);
    length = len;
    prevBranch = this;
    //recursion starts
    Recursion();
}
    //--------------------------------------------------------------------------------------------
void Branch::draw(Window &graphic){
    graphic.SetColor(233, 242, 241, 0);
    if(ValidLen()){
        graphic.DrawLine(prevBranch->_MainNode, _MainNode);
        RBranch->draw(graphic);
        LBranch->draw(graphic);
    }
}
//--------------------------------------------------------------------------------------------
bool Branch::ValidLen(){
    if (length > 1){
        std::cout<<length<<std::endl;
        return true;
    }
    else{
        std::cout<< "too small to make another recursion"<<std::endl;
        return false;
    }
}
//--------------------------------------------------------------------------------------------
void Branch::Recursion(){
    if(prevBranch->RBranch == nullptr && ValidLen()){
        //make right Node
        _EndNode.x = _MainNode.x + length* cos(Angle);
        _EndNode.y = _MainNode.y - length* sin(Angle);
        //makes right branch()
        Branch(this);
    }
    else{
        if(prevBranch->LBranch == nullptr && ValidLen()){
            //makes left Node from right Node
            _EndNode.x = _MainNode.x - length* cos(Angle);
            _EndNode.y = _MainNode.y - length* sin(Angle);
            //makes left branch()
            Branch(this);
        }
    }    
}

//===========================================================================================
