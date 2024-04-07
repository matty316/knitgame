#include "app.h"
#include "common.h"

#define WIDTH 1280
#define HEIGHT 720
#define SPEED 5

struct App *app;

void initApp(void) {
    InitWindow(WIDTH, HEIGHT, "knitgame");
    SetWindowState(FLAG_WINDOW_HIGHDPI);
    int display = GetCurrentMonitor();
    ToggleFullscreen();
    SetWindowSize(GetMonitorWidth(display), GetMonitorHeight(display));
    SetTargetFPS(60);

    app = malloc(sizeof(struct App));
    app->player_x = (float) WIDTH/2;
    app->player_y = (float) HEIGHT/2;
}

void processInput(void) {
    if (IsKeyDown(KEY_RIGHT)) app->player_x += SPEED; 
    if (IsKeyDown(KEY_LEFT)) app->player_x -= SPEED; 
    if (IsKeyDown(KEY_UP)) app->player_y -= SPEED; 
    if (IsKeyDown(KEY_DOWN)) app->player_y += SPEED; 
}

void update(void) {

}

void render(void) {
    BeginDrawing();
  
    ClearBackground(RAYWHITE);
    DrawCircle(app->player_x, app->player_y, 50, RED);
    
    EndDrawing();
}

void loop(void) {
    while (!WindowShouldClose()) {
        processInput();
        update();
        render();
    }
}

void closeApp(void) {
    free(app);
    CloseWindow();
}
