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
    color1.setRedVal(50); 
    color1.setGreenVal(120);
    color1.setBlueVal(155);
    color1.print();

    Color color2; 
    color2.setRedVal(176);
    color2.setGreenVal(232);
    color2.setBlueVal(0);
    color2.print();

    Color color3; 
    color3.setRedVal(127); 
    color3.setGreenVal(98);
    color3.setBlueVal(45);
    color3.print();

    return 0;
}