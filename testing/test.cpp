#include <SDL.h>
#include <stdio.h>
#include<iostream>


int main( int argc, char *argv[] )
{
    SDL_Init( 0 );

    int renderers = SDL_GetNumRenderDrivers();

    for ( int i = 0; i <= renderers; i++ ) {
    SDL_RendererInfo info = { 0 };

    if ( SDL_GetRenderDriverInfo( i, &info ) < 0 ) {
        return 1;
    }

    printf( "Driver %d: %s\n", i, info.name );
    }

    return 0;
}