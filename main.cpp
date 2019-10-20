#include"Tree.h"

int main(int argc, char* argv[]){
    Window window;
    // defining trees root
    Point rootp(300, 500);

    
    while(window.isActive()){
        //clear();
        window.SetColor(94, 94, 94, 0);
        window.Clear();
        //draw();
        Branch root_branch(rootp, 90, 30);
        std::cout<<sizeof(root_branch);
        root_branch.draw(window);
        //Present();
        window.Present();
    }
    return 0;
}