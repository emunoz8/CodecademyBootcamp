#include <bits/stdc++.h>
using namespace std;

int main() {
    bool isPassing = true;
    vector<int> grades(3);
    float sum = 0.0;
    string grade;

    for (size_t i = 0; i < grades.size(); i++) {
        cin >> grades[i];
        sum += grades[i];
        if (grades[i] < 40) {
            isPassing = false; 
            grade = "F";
        }
    }

    sum /= grades.size(); 

    if (isPassing) {
        if      (sum >= 90) grade = "A";
        else if (sum >= 80) grade = "B";
        else if (sum >= 70) grade = "C";
        else if (sum >= 60) grade = "D";
        else                grade = "F";
    }
    cout << fixed << setprecision(2);
    cout << "Final Percentage: " << sum << "%" << endl;
    cout << "Status: " << (isPassing ? "Pass" : "Fail") << endl;
    cout << "Letter Grade: " << grade << endl;

    return 0;
}
