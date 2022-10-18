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


#endif //CSC212_REVIEW_PROJECT_GRADER_H
