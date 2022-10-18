#include "Grader.h"

double Grader::getCurrentGrade(vector<int> allGradesWeighted) {
    // Make a variable maxGrade = 100
    int maxGrade = 100;
    
    // For each value in the allGradesWeighted vector
    for (int i=0; i < this->allGradesWeighted.size(); i++){
        // Subtract 100 by weighted value of grade
        maxGrade -= allGradesWeighted[i];
    }

    // Return maxGrade
}

double Grader::getMaxGradeAchievable(vector<int> allGradesWeighted) {
    // Check if current size of allGradesWeighted is as big as it can be
    // If it is not, then add 100s for each grade until allGradesWeighted
}

void Grader::startGrading() {

    // Get current grade
    currentGrade = getCurrentGrade(this->allGradesWeighted);

    // Get max grade achievable
    maxGradeAchievable = getMaxGradeAchievable(this->allGradesWeighted);
}
