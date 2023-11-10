#include <iostream>
#include <string>
using namespace std;

float Average(float marks[], int size);

char Grades(float average);

int main()
{
    string name;
    float marks[5];
    float average;
    char grade;

    cout << "Enter name: ";
    getline(cin, name);

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks: ";
        cin >> marks[i];
    }

    average = Average(marks, 5);
    grade = Grades(average);

    cout << "\nName: " << name << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;
}

float Average(float marks[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += marks[i];

    return sum / size;
}

char Grades(float average)
{
    char grade;

    if (average >= 80)
        grade = 'A';
    else if (average >= 60)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';

    return grade;
}
