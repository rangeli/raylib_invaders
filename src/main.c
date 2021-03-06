#include <raylib.h>
#include "game.h"

int main() {
  Game g = {
      .screen={
          .x=0,
          .y=0,
          .width=800,
          .height=450,
          }
  };

  InitWindow(g.screen.width, g.screen.height, "Raylib Invaders");

  InitAudioDevice();

  InitGame(&g);

//  SetTargetFPS(60);

  while(!WindowShouldClose())
  {
    UpdateGame(&g, GetFrameTime());
    BeginDrawing();
    DrawGame(&g);
    EndDrawing();
  }

  CloseWindow();
  CloseGame(&g);
  return 0;
}
