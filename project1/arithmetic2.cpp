/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project1A

This program will ask the user to enter the total number of questions to ask, and then it will generate that many random arithmetic questions, and ask the user to solve them. The program will then print the correctness of the user's answers.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getPositiveInteger(){
    int input;
    do{
        cout << "Enter the total number of questions to ask:";
        cin >> input;
        cout << "The number of questions cannot be zero or negative. Re-enter: \n";

    }while(input <= 0);
    return input;
}

void generateQuestionAndCheckAnswer(int &c){
    
    char operators[] = {'+', '-', '*', '/', '%'};
    int random = rand() %5;
    char op = operators[random];
    
    int operand1 = rand() % 10;

    int operand2;
    if(op == '/' || op == '%'){
        operand2 = 1 + (rand() % 9);
    }else{
        operand2 = (rand() % 10);
    }

    int result;
    switch(op){
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result = operand1 / operand2;
            break;
        case '%':
            result = operand1 % operand2;
            break;
    }
    cout << "What is " << operand1 << " " << op << " " << operand2 << "?\n";
        int answer;
        cin >> answer;

        if(answer == result){
            cout<< "true!\n";
        }else{
            cout<< "false!\n";
        }


}

void grate(double corrent){
    if(corrent >= 90){
        cout << 'A';
    }else if (corrent >= 80){
        cout << 'B';
    }else if (corrent >= 70){
        cout << 'C';
    }else if (corrent >= 60){
        cout << 'D';
    }else{
        cout << 'F';
    }
}


int main(){
    srand(time(0));
    
    cout << "Enter the total number of questions to ask:";
    int input = getPositiveInteger();
    
    int correct = 0;
    for( int i = 0; i < input; i++){
        generateQuestionAndCheckAnswer(correct);
    }
    double correctness = (double)correct / input * 100;
    cout << "Correctness: " << correctness << "%\n";

    grate(correctness);

    

    return 0;
}