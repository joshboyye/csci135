//This program will ask the user to enter the total number of questions to ask, and then it will ask that many questions. For each question, it will generate two random numbers between 0 and 9, and then it will ask the user to enter the result of adding, subtracting, multiplying, dividing, or taking the remainder of the two numbers. It will then check the user's answer and print "true" if the answer is correct, and "false" otherwise. After asking the specified number of questions, it will print the percentage of questions that were answered correctly, and it will print the letter grade that corresponds to that percentage.


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getPositiveInteger(){
    int input;
    do{
        cout << "Enter the total number of questions to ask:";
        cin >> input;
        if(input <= 0){
            cout << "The number of questions cannot be zero or negative. Re-enter: \n";
        }
    }while(input <= 0);
    return input;
}

void generateQuestionAndCheckAnswer(int &correct){
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
        cout<< "true\n";
        correct++;
    }else{
        cout<< "false\n";
    }
}

void grate(double correct){
    cout << "letter grade: ";
    if(correct >= 90){
        cout << 'A';
    }else if (correct >= 80){
        cout << 'B';
    }else if (correct >= 70){
        cout << 'C';
    }else if (correct >= 60){
        cout << 'D';
    }else{
        cout << 'F';
    }
    cout << "\n";
}

int main(){
    srand(time(0));
    
    int input = getPositiveInteger();
    
    int correct = 0;
    for( int i = 0; i < input; i++){
        generateQuestionAndCheckAnswer(correct);
    }
    double correctness = (double)correct / input * 100;
    cout << "percentage correct: " << correctness << "%\n";

    grate(correctness);

    return 0;
}