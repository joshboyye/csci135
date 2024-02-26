/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project1C

This program will read a file
*/


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

double parseTerm(istringstream& iss);
double parseFactor(istringstream& iss);

double parseExpression(istringstream& iss) {
    double value = parseTerm(iss);
    for (;;) {
        char op;
        if (!(iss >> op)) break;
        if (op != '+' && op != '-') {
            iss.putback(op);
            break;
        }
        double term = parseTerm(iss);
        if (op == '+') value += term;
        else value -= term;
    }
    return value;
}

double parseTerm(istringstream& iss) {
    double value = parseFactor(iss);
    for (;;) {
        char op;
        if (!(iss >> op)) break;
        if (op != '*' && op != '/' && op != '%') {
            iss.putback(op);
            break;
        }
        double factor = parseFactor(iss);
        if (op == '*') value *= factor;
        else if (op == '/') value /= factor;
        else value = fmod(value, factor);
    }
    return value;
}

double parseFactor(istringstream& iss) {
    double value;
    iss >> value;
    return value;
}

int main() {
    ifstream file("arithmetic.csv");
    string line;
    int total_questions = 0, correct_answers = 0;

    while (getline(file, line)) {
        istringstream iss(line);
        string expression, answer_str;
        getline(iss, expression, ',');
        getline(iss, answer_str, ',');
        double answer = stod(answer_str);
        if (abs(parseExpression(istringstream(expression)) - answer) < 1e-6) {
            correct_answers++;
        }
        total_questions++;
    }

    double correct_rate = static_cast<double>(correct_answers) / total_questions;
    char grade;
    if (correct_rate >= 0.9) {
        grade = 'A';
    } else if (correct_rate >= 0.8) {
        grade = 'B';
    } else if (correct_rate >= 0.7) {
        grade = 'C';
    } else if (correct_rate >= 0.6) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "percent: " << correct_rate * 100 << "%" << endl;
    cout << "letter grade: " << grade << endl;

    return 0;
}