#ifndef CSC212_REVIEW_PROJECT_GRADER_H
#define CSC212_REVIEW_PROJECT_GRADER_H
#include <bits/stdc++.h>
using namespace std;

class Grader {
    public:
        vector<double> labGrades;
        vector<double> assignmentGrades;
        double termProject;
        double finalExam;
        double reviewProject;
        vector<double> allGradesWeighted;

        double currentGrade;
        double maxGradeAchievable;

        void startGrading();
        double getCurrentGrade();
        double getMaxGradeAchievable();

};


#endif //CSC212_REVIEW_PROJECT_GRADER_H
