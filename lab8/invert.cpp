#include <iostream>
#include <fstream>
using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
    ifstream inFile("inImage.pgm", ios::binary);

    string header;
    inFile >> header;
    inFile >> width >> height;
    int max_val;
    inFile >> max_val;

    inFile.ignore();

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            char pixel;
            inFile.read(&pixel, 1);
            image[i][j] = (unsigned char)pixel;
        }
    }

    inFile.close();
}

void writeImage(int image[MAX_H][MAX_W], int height, int width) {
    ofstream outFile("outImage.pgm", ios::binary);

    outFile << "P5\n";
    outFile << width << " " << height << "\n";
    outFile << 255 << "\n";

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            char pixel = (char)image[i][j];
            outFile.write(&pixel, 1);
        }
    }

    outFile.close();
}

void invertImage(int image[MAX_H][MAX_W], int height, int width) {
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            image[i][j] = 255 - image[i][j];
        }
    }
}

int main() {
    int img[MAX_H][MAX_W];
    int height, width;

    readImage(img, height, width);
    invertImage(img, height, width);
    writeImage(img, height, width);

    return 0;
}