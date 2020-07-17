#include "ofMain.h"

class Button {
    
    public:
        Button();
        Button(int xPos, int yPos, int width, int height);
        void mousePressed(int x, int y);
        void tick();
        void render();
        bool wasPressed();
        
    private:
        int xPos, yPos, width, height;
        ofImage buttonImage;
        ofImage clickedButtonImage;
        bool pressed = false;
        int pressedCounter = -1;
};