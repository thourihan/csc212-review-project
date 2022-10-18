# csc212-review-project
Review Project for CSC212

Group Members: Phakeo Arounerangsy, Henry Gutierrez, Timothy Hourihan, Jagger Pacheco

# Summary of Program + Group Member Contributions
## Summary of Program
Our program does abc because xyz...

## Group Member Contributions
- Phakeo - Created flowcharts and videos demonstrating how program runs. Helped with program pseudocode. 
- Henry - def
- Tim - Created pseudocode for main.cpp and Grader.cpp. Created Grader.h. Implemented code for Grader.cpp. Helped with readme.md
- Jagger - jkl

# Proof of Planning: Pseudocode
## Main function Skeleton
```

#include "Grader.h"

void getInput(Grader &grader);
void printResults(Grader &grader);

int main() {
    // Create instance of class "Grader"
    Grader grader;

    // Get input
    getInput(grader);

    // Perform operations on input data
    grader.startGrading();

    // Print results
    printResults(grader);
}

// Get input grades from user
void getInput(Grader &grader){
    // Walk user through how to enter their grades for each category

    // For each category in the Grader class instance:
        // Prompt user how many grades they have
        // For each grade the user has to enter:
            // Add grade to its category vector in the Grader class instance
}

void printResults(Grader &grader){
    // Display each property from the grader class to the user

    // Display the student's current grade
        // Show a breakdown of the student's grade by each assignment

    // Show the maximum possible grade achievable if the student earns a 100 on everything in the future
}
```

## Header File

```
#ifndef CSC212_REVIEW_PROJECT_GRADER_H
#define CSC212_REVIEW_PROJECT_GRADER_H
#include <bits/stdc++.h>
using namespace std;

class Grader {
    public:
        vector<int> labGrades;
        vector<int> assignmentGrades;
        int termProject;
        int finalExam;
        int reviewProject;
        vector<vector<int>> allGrades;

        double currentGrade;
        double maxGradeAchievable;

        void startGrading();
        double getCurrentGrade(vector<vector<int>> grades);
        double getMaxGradeAchievable(vector<vector<int>> grades);

};


#endif //CSC212_REVIEW_PROJECT_GRADER_H
```
## Grader Class
```
#include "Grader.h"

double Grader::getCurrentGrade(vector<vector<int>> allGrades) {
    // Make a variable maxGrade = 100
    // For each value in the allGrades vector
        // Subtract 100 by weighted value of grade
        
    // Return maxGrade
}

double Grader::getMaxGradeAchievable(vector<vector<int>> allGrades) {
    // Check if current size of allGrades is as big as it can be
    // If it is not, then add 100s for each grade until allGrades
}

void Grader::startGrading() {
    
    // Get current grade
    currentGrade = getCurrentGrade(this->allGrades);
    
    // Get max grade achievable
    maxGradeAchievable = getMaxGradeAchievable(this->allGrades);
}
```

# Proof of Planning: Flowcharts
## Main function flow chart 
![](Main%20function%20flow%20chart.png)
## Get Input function flow chart
![](Getinput%20flow%20chart.png)
# Algorithm explained: Input/Output and Reasoning

# Instructions for Input && Compiling Program



