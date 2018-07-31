//  Cao Pham

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void drawSvgHeader();
void drawRandomCircle();
void drawSvgFooter();
void drawOneCircle (int cx, int cy, int r, string color, float opacity);
string randColor ();
string randHex();


int main(int argc, const char * argv[]) {
    

    std::srand (std::time (0));
	// randomize based on time

    int numCircles = 64;
    
    drawSvgHeader();
    for (int i=0; i<numCircles; i++) {
        drawRandomCircle();
    }
    drawSvgFooter();
    
   
    
    return 0;
}

void drawSvgHeader() {
    cout << "<svg width='600' height='600' ";
    cout << "xmlns='http://www.w3.org/2000/svg' ";
    cout << "viewbox='0 0 600 600' ";
    cout << "xmlns:xlink='http://www.w3.org/1999/xlink'>" << endl;
}

void drawRandomCircle() {
    int cx = rand() % 600;
    int cy = rand() % 600;
    int r = rand() % 300;
    string color = randColor();
    // string color = "red";
    float opacity = (rand() % 1000) / 1000.0;
    
    drawOneCircle (cx, cy, r, color, opacity);
}

string randColor () {
    
 
    string hex[] = { "#", "#", "#", "#"};
    
    
    int r = rand() % 4;
    
    hex[r] = hex[r] + randHex() + randHex() + randHex() + randHex() + randHex() + randHex();

    
    return hex[r];

}


string randHex() {
    
    
    string hexadec[16] = { "A", "B", "C", "D", "E", "F",
                    "0", "1", "2", "3", "4", "5",
                        "6", "7", "8", "9" };
    

    int r = rand() % 16;

    
    return hexadec[r];
    }



void drawSvgFooter() {
    cout << "</svg>" << endl;
}

void drawOneCircle (int cx, int cy, int r, string color, float opacity) {
    printf ("<circle cx='%d' cy='%d' r='%d' fill='%s' fill-opacity='%f' />", cx, cy, r, color.c_str(), opacity);
    cout << endl;
}


