// COMSC210 | Lab 16 | Majd Bohsali
// IDE used: Visual Studio Code

#include <iostream>
using namespace std;

class Color {
private:
    int redVal; 
    int greenVal;
    int blueVal;
public: 
    Color() {
        redVal = 0;
        greenVal = 0; 
        blueVal = 0; 
    }

    Color(int r, int g, int b) {
        redVal = r;
        greenVal = g; 
        blueVal = b; 
    }

    Color(int r, int g) {
        redVal = r;
        greenVal = g; 
        blueVal = 0; 
    }

    int getRedVal()              { return redVal; }
    void setRedVal(int r)        { redVal = r; }
    int getGreenVal()            { return greenVal; }
    void setGreenVal(int g)      { greenVal = g; }
    int getBlueVal()             { return blueVal; }
    void setBlueVal(int b)       { blueVal = b; }

    void print() { 
        cout << "Color Code: " << "R = " << redVal << " , G = " << greenVal << " , B = " << blueVal << endl; 
    }
};

int main() { 
    Color color1; 
    color1.print();

    Color color2 (186, 232); 
    color2.print();

    Color color3(127, 98, 45); 
    color3.print();

    return 0;
}