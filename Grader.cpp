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
