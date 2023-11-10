#include <iostream>
#include <string>
using namespace std;
struct Student
{
    char name[30], grade;
    float marks[5], avg;
};

float Average(Student student, int size);

char Grades(Student student);

int main()
{
    Student S1;

    cout << "Enter name: ";
    cin.getline(S1.name, 30);

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks: ";
        cin >> S1.marks[i];
    }

    S1.avg = Average(S1, 5);
    S1.grade = Grades(S1);

    cout << "\nName: " << S1.name << endl;
    cout << "Average: " << S1.avg << endl;
    cout << "Grade: " << S1.grade << endl;
}

float Average(Student student, int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += student.marks[i];

    return sum / size;
}

char Grades(Student student)
{
    char grade;

    if (student.avg >= 80)
        grade = 'A';
    else if (student.avg >= 60)
        grade = 'B';
    else if (student.avg >= 50)
        grade = 'C';
    else
        grade = 'F';

    return grade;
}
