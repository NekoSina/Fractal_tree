#pragma once
#include<random>
#include <iostream>
#include<string>
#include "SDL.h"
#include"SDL_image.h"
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
        bool isActive(){return _isActive;}
};

class Math{
    float Map(float x, float min1, float max1, float min2, float max2);
    float GetRandom(float min, float max);
};