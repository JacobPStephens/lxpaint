#ifndef LXPAINT_CLASS_H
#define LXPAINT_CLASS_H

class LXPaint {
    public:
        LXPaint();
        void Update(float dt);
        void ProcessInput();

        bool Keys[1024];
        struct Mouse {
            float xpos;
            float ypos;
            bool leftPressed;
            bool rightPressed;
        } mouse;

        void PrintMouseInfo();

};

#endif