/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 8 Task F

This program will read a PGM image from the file "inImage.pgm" and output a modified image to "outImage.pgm"
*/
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;
const int PIXEL_SIZE = 2; 

void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
    char c;
    int x;
    ifstream instr;
    instr.open("inImage.pgm");

    instr >> c;
    assert(c == 'P');
    instr >> c;
    assert(c == '2');

    while ((instr >> ws).peek() == '#') {
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
}

void writeImage(int image[MAX_H][MAX_W], int height, int width) {
    ofstream ostr;
    ostr.open("outImage.pgm");
    if (ostr.fail()) {
        cout << "Unable to write file\n";
        exit(1);
    }

    ostr << "P2" << endl;
    ostr << width << ' ';
    ostr << height << endl;
    ostr << 255 << endl;

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            assert(image[row][col] < 256);
            assert(image[row][col] >= 0);
            ostr << image[row][col] << ' ';
        }
        ostr << endl;
    }
    ostr.close();
}

void pixelate(int image[MAX_H][MAX_W], int height, int width) {
    int pixelSum, pixelAverage;
    int pixelCount;

    for (int row = 0; row < height; row += PIXEL_SIZE) {
        for (int col = 0; col < width; col += PIXEL_SIZE) {
            pixelSum = 0;
            pixelCount = 0;

            for (int i = row; i < row + PIXEL_SIZE; i++) {
                for (int j = col; j < col + PIXEL_SIZE; j++) {
                    if (i < height && j < width) {
                        pixelSum += image[i][j];
                        pixelCount++;
                    }
                }
            }

            pixelAverage = pixelSum / pixelCount;

            for (int i = row; i < row + PIXEL_SIZE; i++) {
                for (int j = col; j < col + PIXEL_SIZE; j++) {
                    if (i < height && j < width) {
                        image[i][j] = pixelAverage;
                    }
                }
            }
        }
    }
}

int main() {
    int img[MAX_H][MAX_W];
    int h, w;

    readImage(img, h, w);

    pixelate(img, h, w);

    writeImage(img, h, w);

    return 0;
}
