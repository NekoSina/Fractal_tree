#include"Application.h"
//======================================================================================>
Window::Window(){
    std::cout<<"Window constructor"<<std::endl; 
    Window::Init();
}
//-------------------------------------------------------------------------------------->
Window::~Window(){
    SDL_DestroyWindow(m_Window);
    SDL_DestroyRenderer(m_Renderer);
}
//-------------------------------------------------------------------------------------->
bool Window::Init(){
    if(SDL_INIT_VIDEO < 0){
        std::cerr<<"SDL_INIT_VIDEO "<<SDL_GetError()<<std::endl;
        return false;
    }   
    m_Window = SDL_CreateWindow(
        "tree",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        600, 600, 
        SDL_WINDOW_OPENGL
    );
    if (m_Window == nullptr) {
        std::cout<<"SDL_INIT_VIDEO failed "<< SDL_GetError()<<std::endl;
        return false;
    }
    m_Renderer = SDL_CreateRenderer(m_Window, 0,-1);
    _isActive = true;
    return true;
}
//-------------------------------------------------------------------------------------->
void Window::Event(){
    SDL_Event event;
    if(SDL_PollEvent(&event)){
        switch (event.type)
        {
        case SDL_QUIT:
            _isActive = false;
            break;
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_SPACE:
                std::cout<<"space pressed"<<std::endl;
                //Renderer::SetColor(12, 124, 22, 222);
                break;
            
            default:
                break;
            }
        default:
            break;
        }
    }
}
//-------------------------------------------------------------------------------------->
bool Window::isActive(){
    return _isActive;
}
//-------------------------------------------------------------------------------------->
void Window::DrawLine(Point start, Point end){
    
    SDL_RenderDrawLine(m_Renderer, start.x, start.x, end.x, end.y);
}
//-------------------------------------------------------------------------------------->
void Window::Present(){
    SDL_RenderPresent(m_Renderer);
}
//-------------------------------------------------------------------------------------->
void Window::Clear(){
    SDL_RenderClear(m_Renderer);
}
//======================================================================================>

