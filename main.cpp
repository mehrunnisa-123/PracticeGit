#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks1, marks2, marks3;
    int total;
    float average;
    char grade;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks for 3 subjects:\n";
        cin >> marks1 >> marks2 >> marks3;
    }

    void calculate() {
        total = marks1 + marks2 + marks3;
        average = total / 3.0;

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
    }

    void display() {
        cout << "\n--- Result ---\n";
        cout << "Name: " << name << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.calculate();
    s.display();

    return 0;
}