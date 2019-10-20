#pragma once
#include <iostream>
#include<string>
#include <math.h>  
#include "SDL.h"
#include"SDL_image.h"
  
#define PI 3.14159265

struct Point{
    Point(float Ix, float Iy){
        x = Ix;
        y = Iy;
    }
    Point(){
        x = 0;
        y = 0;
    }
    float x, y;
};
// Window interface
class Window{
    private:
        SDL_Window *m_Window = nullptr;
        SDL_Renderer * m_Renderer = nullptr;
        bool Init();
        bool _isActive = true;
    public:
        Window();
        ~Window();
        bool isActive();
        void Event();
        void Render();
        void SetColor(int r, int g, int b, int a);
        void Clear();
        void DrawLine(Point start, Point end);
        void Present();
};