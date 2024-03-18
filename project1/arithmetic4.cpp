//This program will ask the user to enter the total number of questions to ask, and then it will ask that many questions. For each question, it will ask the user to enter the result of adding, subtracting, multiplying, dividing, or taking the remainder of two random numbers between 0 and 9. It will then check the user's answer and print "true" if the answer is correct, and "false" otherwise. After asking the specified number of questions, it will print the percentage of questions that were answered correctly, and it will print the letter grade that corresponds to that percentage.

#include <iostream> 
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL)); // new time, new num
    ifstream fin("data.csv");
    ifstream tracker("data.csv");
    // check if file can be read
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string equation;
    string answer;
    string junk;
    float numQuestions = 0;
    int numCorrect = 0;
    float totalQuestion = 0;
    vector <string> listQuestions;
    vector <string> listAnswers;

    //find total number of questions 
    while(getline(tracker, junk)){
        totalQuestion += 1; //counts # of question
    }
    

    while(getline(fin, equation, ',')) {

        listQuestions.push_back(equation); // storing string of question
        
        getline(fin, answer); //answer section 
        listAnswers.push_back(answer); // storing string of answers
    }

    while(!listQuestions.empty()) // no more questions to ask
    {
        int index = rand()%listQuestions.size(); //prints randoom question 

        equation = listQuestions[index]; 
        answer =listAnswers[index];

        numQuestions += 1; //counts # of question

        cout << "(" << numQuestions << ")" << equation << "? ";
        double userAnswer;
        cin >> userAnswer;

        if(userAnswer == stof(answer)) //takes string turns into float
        {
            numCorrect += 1;
            cout << "true" << endl;
        }
        else {
            cout << "false" << endl;
            
        }
        if(numCorrect/totalQuestion * 100.0 >= 60){
            cout << "At least 60% is correct. Stop" << endl;
            break;
        }
        
        // takes the index that was selected by random and sets its value to the last index
        listQuestions[index] = listQuestions[listQuestions.size() - 1]; 
        listQuestions.pop_back(); // deletes last index

        // takes the index that was selected by random and sets its value to the last index
        listAnswers[index] = listAnswers[listAnswers.size() - 1];
        listAnswers.pop_back(); // deletes last index 
    }
    //percentage output
    float percent = numCorrect / totalQuestion * 100.0;
    cout << "percent: " << percent << "%" << endl;
    
    fin.close();
    return 0;
}