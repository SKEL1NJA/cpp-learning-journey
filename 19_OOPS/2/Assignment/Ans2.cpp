#include<iostream>
using namespace std;

class Student{
private:
    int rollNo;
    string name;
    string department;
    string course;
    int yearOfJoining;

    // 2 class variables
    static string collegeName;
    static int totalStudents;

public:
    Student(int r, string n, string d, string c, int yoj) : rollNo(r), name(n), department(d), course(c), yearOfJoining(yoj) {}
    bool sameDept(Student& s2){
        if(department==s2.department)
            return true;
        else
            return false;
    }

    static void collegeDetails(){
        cout << "College Name: " << collegeName << " , " << "Total students: " << totalStudents << endl;
    }
};

string Student::collegeName = "MAIT";
int Student::totalStudents = 4000;

int main(){
    Student s1(1, "Parth", "MAIT", "CSE", 2023);
    Student s2(10, "Uday", "MAIT", "CSE", 2023);

    cout << s1.sameDept(s2) << endl;
    Student::collegeDetails();

    return 0;
}