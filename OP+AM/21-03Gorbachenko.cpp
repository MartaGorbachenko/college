#include <iostream> 
const int MAX_SUBJECTS = 10;
const int MAX_STUDENTS = 25;

struct Teacher {
    int id;
    char name[50];
    char department[50];
    int subject_ids[MAX_SUBJECTS];
    int subject_count;
};

struct Student {
    int id;
    char name[50];
    int group_id;
};

struct Subject {
    int id;
    char name[50];
    int credits;
};

struct Grade_scale {  
    int min_score;
    int max_score;
    char grade_label[20];
};

struct Group {
    int id;
    char name[50];
    int student_ids[MAX_STUDENTS];
    int student_count;
};

struct Grade_report {
    int student_id;
    int subject_id;
    int teacher_id;
    int score;
};

int main(){
    Subject math = {1, "Math", 4};
    Teacher teacher_1 = {1, "Kapichyna T.O.", "Physics and Math", {1}, 1};
    Student student_1 = {1, "Gorbachenko Martha", 21};
    Group group_1 = {21, "Group IPZ-21", {1}, 1};
    Grade_report report_1 = {1, 1, 1, 92};
    Grade_scale scale_a = {90, 100, "Excellent"};

    std::cout << "Subject: " << math.name << " (" << math.credits << " credits)\n";
    std::cout << "Teacher: " << teacher_1.name << ", Department: " << teacher_1.department << "\n";
    std::cout << "Student: " << student_1.name << ", Group ID: " << student_1.group_id << "\n";
    return 0;
}