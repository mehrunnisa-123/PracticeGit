#include <iostream>
using namespace std;

int main() {
    string name;
    int marks1, marks2, marks3;
    int total;
    float average;
    char grade;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for 3 subjects:\n";
    cin >> marks1 >> marks2 >> marks3;

    total = marks1 + marks2 + marks3;
    average = total / 3.0;

    // Grade logic added
    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n--- Result ---\n";
    cout << "Name: " << name << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}