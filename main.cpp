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
    cout << "Input grade at each category" << endl;
    vector<string> categories = {"Labs", "Assignments", "Term Project", "Final Exam", "Review Project"};

    // For each category
    grader.termProject = -1;
    grader.finalExam = -1;
    grader.reviewProject = -1;
     for (int i = 0; i < categories.size(); i++){
        int temp = 0;
        cout << "How many grades do you have for " << categories[i] << std::endl;

        cin >> temp;

        if(temp > 0){
            cout << "Enter your grade for: " << categories[i] << std::endl;
        }

        for(int j = 0; j < temp; j++){
            double grades;

            if(categories[i] == "Labs"){
                cin >> grades;
                grader.labGrades.push_back(grades);
            }

            else if(categories[i] == "Assignments"){
                cin >> grades;
                grader.assignmentGrades.push_back(grades);
            }

            else if(categories[i] == "Term Project"){
                cin >> grades;
                grader.termProject = grades;
                break;
            }

            else if(categories[i] == "Final Exam"){
                cin >> grades;
                grader.finalExam = grades;
                break;
            }

            else if(categories[i] == "Review Project"){
                cin >> grades;
                grader.reviewProject = grades;
                break;
            }
        }
        // cout enter grade for category[i]
        // Prompt user how many grades they have
        // For each grade the user has to enter:
            // Add grade to its category vector in the Grader class instance
    }
}

void printResults(Grader &grader){
    // Display each property from the grader class to the user
    cout << "Lab Grade: " << grader.lGrade << endl;
    cout << "Assignment Grade: " << grader.aGrade << endl;
    // Display the student's current grade
    cout << "Your current grade for the class: " << grader.currentGrade << endl;
    // Display whether student is eligible to skip final exam with current grade
    if(grader.currentGrade - (grader.reviewProject * 0.04) >= 90 && grader.finalExam == -1){
        cout << "With your current grade you would be able to skip the final exam" << endl;
    }
    else if(grader.finalExam == -1){
        cout << "With your current grade you would NOT be able to skip the final exam" << endl;
    }
    // Show the maximum possible grade achievable if the student earns a 100 on everything in the future
    cout << "Your maximum possible grade achievable for the class: " << grader.maxGradeAchievable << endl;
}
