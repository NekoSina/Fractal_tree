#include"Tree.h"

int main(int argc, char* argv[]){
    Window window;
    Point rootp(300, 500);
    Branch *tree = new Branch(rootp, 90, 30);
    std::cout<<sizeof(tree);
    while(window.isActive()){
        //clear();
        window.SetColor(94, 94, 94, 0);
        window.Clear();
        tree->draw(window);
        //Present();
        window.Present();
    }
    return 0;
}