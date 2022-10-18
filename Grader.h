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

        void startGrading();
        double currentGrade(vector<int> grades);
        double maximumGradeAchievable(vector<int> grades);

};


#endif //CSC212_REVIEW_PROJECT_GRADER_H
