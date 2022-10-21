#include "Grader.h"

double Grader::getCurrentGrade() {
    double tempGrade = 0;
    
    // Add each weighted grade to the current grade variable
    for (int i=0; i<this->allGradesWeighted.size(); i++){
        tempGrade += this->allGradesWeighted[i];
    }
    // divides total grade by weight to account for scenario where certain categories do not have any grades entered
    tempGrade = tempGrade / weight;
    //adds review project points if they exist
    if(reviewProject != -1){
        tempGrade += reviewProject * 0.04;
    }
    
    // Result will be the student's current grade
    return tempGrade;
}

void Grader::weightGrades() {
    
    //Goes through each grade category and adds the weighted value of each individual assignment, excluding review project grade
    for(int i = 0; i < labGrades.size(); i++){
        allGradesWeighted.push_back((labGrades[i]*0.05)/labGrades.size());
        if(i == 0){
            //adds cumulative weight if a category has an entry
            weight += 0.05;
        }
    }
    for(int i = 0; i < assignmentGrades.size(); i++){
        allGradesWeighted.push_back((assignmentGrades[i]*0.50)/assignmentGrades.size());
        if(i == 0){
            weight += 0.50;
        }
    }
    if(termProject != -1){
        allGradesWeighted.push_back(termProject*0.35);
        weight += 0.35;
    }
    if(finalExam != -1){
        allGradesWeighted.push_back(finalExam*0.10);
        weight += 0.10;
    }
}

double Grader::getMaxGradeAchievable() {
    
    //reset weight and the vector that contains all grades
    weight = 0;
    allGradesWeighted.clear();
    //fills in all empty slots with 100%
    for(int i = labGrades.size(); i < 10; i++){
        labGrades.push_back(100);
    }
    for(int i = assignmentGrades.size(); i < 5; i++){
        assignmentGrades.push_back(100);
    }
    if(termProject == -1){
        termProject = 100;
    }
    if(finalExam == -1){
        finalExam = 100;
    }
    if(reviewProject == -1){
        reviewProject = 100;
    }
    // Recalculate grade with added values
    weightGrades();
    // Result will be the maximum possible grade
    return getCurrentGrade();
}

void Grader::startGrading() {
    lGrade = 0;
    aGrade = 0;
    // Calculate total lab grade and total assignment grade
    for(int i = 0; i < labGrades.size(); i++){
        lGrade += labGrades[i];
    }
    lGrade = lGrade/labGrades.size();
    
    for(int i = 0; i < assignmentGrades.size(); i++){
        aGrade += assignmentGrades[i];
    }
    aGrade = aGrade/assignmentGrades.size();
    
    // Set all weighted grades
    weightGrades();
    
    // Get current grade
    currentGrade = getCurrentGrade();

    // Get max grade achievable
    maxGradeAchievable = getMaxGradeAchievable();
}
