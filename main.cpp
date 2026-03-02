#include <iostream>
using namespace std;

int main() {
    string name;
    int marks1, marks2, marks3;
    int total;
    float average;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for 3 subjects:\n";
    cin >> marks1 >> marks2 >> marks3;

    total = marks1 + marks2 + marks3;
    average = total / 3.0;

    cout << "\n--- Result ---\n";
    cout << "Name: " << name << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}