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
        double lGrade;
        double aGrade;
        double weight;
        vector<double> allGradesWeighted;

        double currentGrade;
        double maxGradeAchievable;

        void startGrading();
        double getCurrentGrade();
        void weightGrades();
        double getMaxGradeAchievable();

};


#endif
