#include "common.h"
#include "sdl_viewer.h"
#include "image.h"

constexpr int w = 640;
constexpr int h = 480;

int main(void) {
  SDLViewer viewer("Hello World", w, h);
  
  Image img(w, h);
  img.SetAll({248, 240, 227});  // Honda championship white background

  bool quit = false;
  int i = 0;
  while (!quit) {
    // Animate some colorful diagonal lines.
    img.SetPixel(i % w, i % h, {static_cast<uint8_t>(i % 256),
      static_cast<uint8_t>(i*2 % 256),
      static_cast<uint8_t>(i*3 % 256)});
    i++;
    viewer.SetImage(img);

    auto events = viewer.Update();
    for (const auto& e : events) {
      if (e.type == SDL_QUIT) {
        quit = true;
        break;
      }
    }
  }

  return 0;
}