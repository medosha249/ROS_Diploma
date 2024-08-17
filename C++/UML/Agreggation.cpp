#include <iostream>
#include <vector>
class Department;
class Employee
{
    std::string name;
    Department *department;

public:
    Employee(std::string name) : name(name), department(nullptr) {}
    void setDepartment(Department *nweDepartment)
    {
        department = nweDepartment;
    }
};

class Department
{
    std::string name;
    std::vector<Employee *> employees;

public:
    Department(std::string name) : name(name) {}

    void addEmployee(Employee *newEmployee)
    {
        employees.push_back(newEmployee);
        newEmployee->setDepartment(this);
    }
};

int main()
{
    Employee emp("Mohammed");
    Department dep("Engineering");
    dep.addEmployee(&emp);
    return 0;
}