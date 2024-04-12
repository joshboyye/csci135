/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Kernel method image filtering, Lab 8 Task G

This program will read a PGM image from the file "inImage.pgm" and output a modified image to "outImage.pgm"
*/
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

const int KERNEL_SIZE = 3;
const int KERNEL[KERNEL_SIZE][KERNEL_SIZE] = {
    {-1, -2, -1},
    { 0,  0,  0},
    { 1,  2,  1}
};

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

void applyKernel(int image[MAX_H][MAX_W], int height, int width) {
    int filteredImage[MAX_H][MAX_W];

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            int sum = 0;

            for (int i = -KERNEL_SIZE / 2; i <= KERNEL_SIZE / 2; i++) {
                for (int j = -KERNEL_SIZE / 2; j <= KERNEL_SIZE / 2; j++) {
                    int neighborRow = row + i;
                    int neighborCol = col + j;

                    if (neighborRow >= 0 && neighborRow < height &&
                        neighborCol >= 0 && neighborCol < width) {
                        sum += image[neighborRow][neighborCol] * KERNEL[i + KERNEL_SIZE / 2][j + KERNEL_SIZE / 2];
                    }
                }
            }

            // Clamp the value between 0 and 255
            filteredImage[row][col] = min(max(sum, 0), 255);
        }
    }

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            image[row][col] = filteredImage[row][col];
        }
    }
}

int main() {
    int img[MAX_H][MAX_W];
    int h, w;

    readImage(img, h, w);

    applyKernel(img, h, w);

    writeImage(img, h, w);

    return 0;
}
