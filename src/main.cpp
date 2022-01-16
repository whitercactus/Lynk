#include <raylib.h>

int main(int argc, char **argv)
{
    InitWindow(680, 450, "Lynk");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircleV({340, 225}, 40, WHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
