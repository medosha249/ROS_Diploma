#include <iostream>
using namespace std;
struct student
{
    string name;
    float gpa;
    double totalMarks;
    int id;
};
int main()
{
    student s1;
    s1.name = "Ahmed";
    s1.gpa = 3.5;
    s1.totalMarks = 405;
    s1.id = 71011;
    cout << s1.name << endl;
    cout << s1.id << endl;
    cout << s1.totalMarks << endl;
    cout << s1.gpa << endl;
}