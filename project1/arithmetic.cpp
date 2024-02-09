#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

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

    return 0;
}