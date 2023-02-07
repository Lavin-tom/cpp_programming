// 3D rotating cube
//animation

#include <iostream>
#include <math.h>
#include <unistd.h>
#include <string.h>
using namespace std;

int width = 160, height =44;
float zBuffer[160 * 44];
char buffer[160 * 44];
float cubeWidth = 20;
int backgroundASCIICode = ' ';
int distanceFromCam = 100;
float incrementSpeed = 0.6;
float A,B,C;
float x,y,z;
float ooz;
int xp, yp,idx;
float K1 = 40;
float horizontalOffset;

class Cube{
    private:
    float calculateX(int i, int j, int k) {
        return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
         j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
    }

    float calculateY(int i, int j, int k) {
        return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
         j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
         i * cos(B) * sin(C);
    }

    float calculateZ(int i, int j, int k) {
        return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
    }
    public:
    void calculateForSurface(float cubeX, float cubeY, float cubeZ, int ch) {
        x = calculateX(cubeX, cubeY, cubeZ);
        y = calculateY(cubeX, cubeY, cubeZ);
        z = calculateZ(cubeX, cubeY, cubeZ) + distanceFromCam;

        ooz = 1 / z;

        xp = (int)(width / 2 + horizontalOffset + K1 * ooz * x * 2);
        yp = (int)(height / 2 + K1 * ooz * y);

        idx = xp + yp * width;
        if (idx >= 0 && idx < width * height) {
            if (ooz > zBuffer[idx]) {
            zBuffer[idx] = ooz;
            buffer[idx] = ch;
            }
        }
    }
};

int main(){
    cout<<"\x1b[2J";          //its a ANCI escape sequence for clear the screen and move the cursor to the top left
    Cube obj;
    while(true){
        memset(buffer, backgroundASCIICode, width * height);    //copy the backgroundASCIICode to the array buffer size of width * height
        memset(zBuffer, 0, width * height * 4);
        cubeWidth = 20;
        horizontalOffset = -2 * cubeWidth;
        // first cube
        for (float cubeX = -cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed) {
            for (float cubeY = -cubeWidth; cubeY < cubeWidth; cubeY += incrementSpeed) {
                obj.calculateForSurface(cubeX, cubeY, -cubeWidth, '@');
                obj.calculateForSurface(cubeWidth, cubeY, cubeX, '$');
                obj.calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
                obj.calculateForSurface(-cubeX, cubeY, cubeWidth, '#');
                obj.calculateForSurface(cubeX, -cubeWidth, -cubeY, ';');
                obj.calculateForSurface(cubeX, cubeWidth, cubeY, '+');
            }
        }
        cout<<"\x1b[H";                 //ANCI escapt sequence for move the cursor to home position(0,0) 
        for (int k = 0; k < width * height; k++)
            putchar(k % width ? buffer[k] : 10);

        A += 0.05;
        B += 0.05;
        C += 0.01;
        usleep(8000 * 2);
    }
    return 0;
}
