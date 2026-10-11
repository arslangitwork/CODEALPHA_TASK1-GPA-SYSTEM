#include <iostream>
using namespace std;

class Student
{
private:
    int courses;
    float totalCredits;
    float totalGradePoints;
    float GPA;
    float CGPA;

public:
    Student()
    {
        totalCredits = 0;
        totalGradePoints = 0;
        GPA = 0;
        CGPA = 0;
    }
    void input()
    {
        cout << "Enter number of courses: ";
        cin >> courses;

        for (int i = 1; i <= courses; i++)
        {
            float grade;
            float creditHours;

            cout << "\nCourse " << i << endl;

            cout << "Enter grade points: ";
            cin >> grade;

            cout << "Enter credit hours: ";
            cin >> creditHours;

            totalGradePoints += grade * creditHours;
            totalCredits += creditHours;
        }
    }
    void calculateGPA()
    {
        GPA = totalGradePoints / totalCredits;
        CGPA = GPA;  
    }
    void display()
    {
        cout << "\n------------------------" << endl;
        cout << "Total Credit Hours: " << totalCredits << endl;
        cout << "Total Grade Points: " << totalGradePoints << endl;
        cout << "Semester GPA: " << GPA << endl;
        cout << "Overall CGPA: " << CGPA << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.calculateGPA();
    s.display();

    return 0;
}
