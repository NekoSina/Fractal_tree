#include"Tree.h"



int main(int argc, char* argv[]){
    Window window;
    while(window.isActive()){
        //clear();
        window.SetColor(94, 94, 94, 0);
        window.Clear();
        //Event();
        //update();
        //Present();
        window.Present();
    }
    return 0;
}