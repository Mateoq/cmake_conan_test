// main.cpp
#include <iostream>

// GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <SDL2/SDL.h>

#include "todos.h"

int main() {
  std::cout << "Hello, Welcome to my todos!!" << std::endl;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cout << "Unable to Init SDL: " << SDL_GetError() << std::endl;
    return 0;
  }
  
  auto vec = glm::vec3(1.0f);

  Todos todos{};

  auto t1 = todos.add("Give a welcome");
  todos.add("Another todo");
  auto t2 = todos.add("Test another todo");

  todos.toggle(t1.id);
  todos.toggle(t2.id);

  todos.list();

  return 0;
}

