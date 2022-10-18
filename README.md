# csc212-review-project
Review Project for CSC212

Group Members: Phakeo Arounerangsy, Henry Gutierrez, Timothy Hourihan, Jagger Pacheco

# Summary of Program + Group Member Contributions
## Summary of Program
Our program does abc because xyz...

## Group Member Contributions
- Phakeo - Created flowcharts and videos demonstrating how program runs. Helped with program pseudocode. 
- Henry - def
- Tim - Created program pseudocode. Helped with readme.md
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
#Header File
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


#endif //CSC212_REVIEW_PROJECT_GRADER_H```


# Proof of Planning: Flowcharts

# Algorithm explained: Input/Output and Reasoning

# Instructions for Input && Compiling Program



