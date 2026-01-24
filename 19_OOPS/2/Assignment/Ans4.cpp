#include<iostream>
#include<vector>
using namespace std;

class Employee{
private:
    string name;
    int EmployeeID;
    float salary;
public:
    void details(){
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> EmployeeID;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display(){
        cout << name << " " << EmployeeID << " " << salary << endl;
    }

    float getSalary(){
        return salary;
    }
};

float averageWage(vector<Employee>& e){
    float sum = 0;
    for (int i = 0; i < e.size();i++)
        sum += e[i].getSalary();
    return sum / e.size();
}

Employee maxSalary(vector<Employee>& e){
    int idx = 0;
    for (int i = 1; i < e.size();i++){
        if(e[i].getSalary()>e[idx].getSalary())
            idx = i;
    }
    return e[idx];
}

int main(){
    vector<Employee> emp(5);
    for (int i = 0; i < 5;i++){
        cout << "Enter details of employee " << i + 1 << ": " << endl;
        emp[i].details();
    }

    cout << "Average Salary = " << averageWage(emp) << endl;

    Employee highest = maxSalary(emp);
    cout << "Employee with highest salary: " << endl;
    highest.display();

    return 0;
}