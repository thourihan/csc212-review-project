#ifndef CSC212_REVIEW_PROJECT_GRADER_H
#define CSC212_REVIEW_PROJECT_GRADER_H
#include <bits/stdc++.h>
using namespace std;

class Grader {
    private:
        vector<int> labGrades;
        vector<int> assignmentGrades;
        int termProject;
        int finalExam;
        int reviewProject;
        vector<vector<int>> allGrades;

        void getAllGrades(vector<int>, vector<int>, int, int, int);
    public:
        double curretCalculatedGrade(vector<int> grades);
        double maximumGradeAchievable(vector<int> grades);
};


#endif //CSC212_REVIEW_PROJECT_GRADER_H
