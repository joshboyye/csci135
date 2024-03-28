#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
    char c;
    int x;
    ifstream instr;
    instr.open("inImage.pgm");

    instr >> c;
    assert(c == 'P');
    instr >> c;
    assert(c == '2');

    while ((instr>>ws).peek() == '#') {
        instr.ignore(4096, '\n');
    }

    instr >> width;
    instr >> height;

    assert(width <= MAX_W);
    assert(height <= MAX_H);
    int max;
    instr >> max;
    assert(max == 255);

    for (int row = 0; row < height; row++)
        for (int col = 0; col < width; col++)
            instr >> image[row][col];
    instr.close();
    return;
}

void writeImage(int image[MAX_H][MAX_W], int height, int width) {
    ofstream ostr;
    ostr.open("outImage.pgm");
    if (ostr.fail()) {
        cout << "Unable to write file\n";
        exit(1);
    };

    ostr << "P2" << endl;
    ostr << width << ' ';
    ostr << height << endl;
    ostr << 255 << endl;

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            assert(image[row][col] < 256);
            assert(image[row][col] >= 0);
            ostr << image[row][col] << ' ';
            ostr << endl;
        }
    }
    ostr.close();
    return;
}

int main() {

    int img[MAX_H][MAX_W];
    int h, w;

    readImage(img, h, w);

    int out[MAX_H * 2][MAX_W * 2]; // New dimensions

    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++) {
            // Copy each pixel as a small 2x2 square in the output
            out[row * 2][col * 2] = img[row][col];
            out[row * 2][col * 2 + 1] = img[row][col];
            out[row * 2 + 1][col * 2] = img[row][col];
            out[row * 2 + 1][col * 2 + 1] = img[row][col];
        }
    }

    writeImage(out, h * 2, w * 2); // Writing the scaled image

}
