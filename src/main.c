#include "raylib.h"

#define HEIGHT 720
#define WIDTH 1280

int main(void) {
    InitWindow(WIDTH, HEIGHT, "knitgame");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("window boi", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
