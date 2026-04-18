#include "LXPaint.h"
#include <GLFW/glfw3.h>
#include <iostream>
#define log(x) std::cout << x << std::endl;

LXPaint::LXPaint() {
    log("init");
}

void LXPaint::Update(float dt) {
    bool up = this->Keys[GLFW_KEY_W];
    bool down = this->Keys[GLFW_KEY_D];
    if (up) {
        log("up");
    }
    if (down) {
        log("down");
    }
    PrintMouseInfo();

}
void LXPaint::PrintMouseInfo() {
    printf("xpos: %.0f ypos: %.0f left: %d right: %d\n", 
    mouse.xpos, mouse.ypos, mouse.leftPressed, mouse.rightPressed);
}
