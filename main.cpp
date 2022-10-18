#include "grader.h"

int main() {
    // Create vectors for each category

    // Walk user through how to enter their grades for each category

    // For each category:
        // Prompt user how many grades they have
        // For each grade the user has to enter:
            // Add grade to its category vector
    
    // Call the class functions
    // Print results
    //order from brightspace
    // labs -> assignments -> final project -> final exam -> midterm project
    vector<int> assingments, labs;
    int finalProject, midTermProject, finalExam, gradeSize;

    for (int i = 0; i < 5; i++){
        cout << "How many grades do you have for this category? : ";
        cin >> gradeSize;
        for(int j = 0; j < gradeSize; j++){
            cout << "input as labs, assignments, final project, final exam, midterm project order";
            
        }
    }
}
