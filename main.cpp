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
