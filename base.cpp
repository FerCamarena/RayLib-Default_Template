//Libraries
#include "raylib.h"

//--------------------------------------------------------------------------------------
//User attributes

//--------------------------------------------------------------------------------------
//User methods

//--------------------------------------------------------------------------------------
//Main function
int main(void) {
    //Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Default RayLib Window");
    SetTargetFPS(60);
    
    //--------------------------------------------------------------------------------------
    //User properties

    //--------------------------------------------------------------------------------------
    //Game loop
    while (!WindowShouldClose()) {
        //Brain logic

        //--------------------------------------------------------------------------------------
        //Graphic logic
        BeginDrawing();
            ClearBackground(PURPLE);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }
    //--------------------------------------------------------------------------------------
    //End
    CloseWindow();
    return 0;
}