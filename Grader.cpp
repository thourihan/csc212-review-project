#include "Grader.h"

double Grader::getCurrentGrade() {
    double tempGrade = 0;
    
    // Add each weighted grade to the current grade variable
    for (int i=0; i<this->allGradesWeighted.size(); i++){
        tempGrade += this->allGradesWeighted[i];
    }
    
    // Divide the current grade by the amount of grade values
    tempGrade /= this->allGradesWeighted.size();
    
    // Result will be the student's current grade
    return tempGrade;
}

double Grader::getMaxGradeAchievable() {
    double maxGrade = 100;

    // For each value in the allGradesWeighted vector
    for (int i=0; i<this->allGradesWeighted.size(); i++){
        // Subtract 100 by weighted value of grade
        maxGrade -= allGradesWeighted[i];
    }

    // Result will be the maximum possible grade
    return maxGrade;
}

void Grader::startGrading() {

    // Get current grade
    currentGrade = getCurrentGrade();

    // Get max grade achievable
    maxGradeAchievable = getMaxGradeAchievable();
}
