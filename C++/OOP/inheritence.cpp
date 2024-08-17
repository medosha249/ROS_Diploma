/*
    Types of Inheritence:
        -Single
        -Multible
        -Multilevel
        -Hierarchy
*/
#include <iostream>

class Person
{
    std::string name;
    std::string gender;
    int age;

public:
    // Paramatrized Construcor
    Person(std::string n, std::string g, int a)
        : name(n), gender(g), age(a) {}
    // Setters

    void setName(std::string n)
    {
        name = n;
    }

    void setGender(std::string g)
    {
        gender = g;
    }

    void setAge(int a)
    {
        age = a;
    }
    // Getters

    std::string getName()
    {
        return name;
    }

    std::string getGender()
    {
        return gender;
    }

    int getAge()
    {
        return age;
    }

    void displayPersonInfo()
    {
        std::cout << "Name: " << name << std::endl
                  << "Gender: "
                  << gender << std::endl
                  << "Age: " << age << std::endl;
    }
};

class Student : public Person
{
    int studyLevel;
    int studentId;
    float GPA;
    std::string department;

public:
    Student(std::string n, std::string g, int a, int sl, int si, float G, std::string dep)
        : Person(n, g, a), studyLevel(sl), studentId(si), GPA(G), department(dep) {}

    void setStudyLevel(int sl)
    {
        studyLevel = sl;
    }

    int getStudyLevel()
    {
        return studyLevel;
    }

    void setStudentId(int id)
    {
        studentId = id;
    }

    int getStudentId()
    {
        return studentId;
    }

    void setGPA(float gpa)
    {
        GPA = gpa;
    }

    float getGPA()
    {
        return GPA;
    }

    void setDepartment(std::string dp)
    {
        department = dp;
    }

    std::string getDepartment()
    {
        return department;
    }

    void displayStudentInfo()
    {
        Person::displayPersonInfo();
        std::cout << "Study Level: " << studyLevel << std::endl
                  << "ID: " << studentId << std::endl
                  << "GPA: " << GPA << std::endl
                  << "Department: " << department << std::endl;
    }
};

class Employee : public Person
{
    int emp_id;
    double salary;

public:
    Employee(std::string n, std::string g, int a, int id, double s)
        : Person(n, g, a), emp_id(id), salary(s) {}

    void setEmployeeId(int id)
    {
        emp_id = id;
    }

    int getEmployeeId()
    {
        return emp_id;
    }

    void setSalary(double sa)
    {
        salary = sa;
    }

    double getSalary()
    {
        return salary;
    }

    void displayEmployeeInfo()
    {
        Person::displayPersonInfo();
        std::cout << "ID: " << emp_id << std::endl
                  << "Salary: " << salary << "$" << std::endl;
    }
};

// Multilevel Inheritence
class Sales : public Employee
{
    float gross_sales;
    float commercial_rate;

public:
    Sales(std::string n, std::string g, int a, int id, double s, float gs, float cr)
        : Employee(n, g, a, id, s), gross_sales(gs), commercial_rate(cr) {}

    void setGross(float gross)
    {
        gross_sales = gross;
    }

    float getGroos()
    {
        return gross_sales;
    }

    void setRate(float rate)
    {
        commercial_rate = rate;
    }

    float getRate()
    {
        return commercial_rate;
    }

    void displaySales_empInfo()
    {
        Employee::displayEmployeeInfo();
        std::cout << "Gross Sales: " << gross_sales << "$" << std::endl
                  << "Commercial Rate: " << commercial_rate << "%" << std::endl;
    }
};

class Engineer : public Employee
{
    std::string speciality;
    int exp;
    int overtimeHours;
    float overtimeHourRate;

public:
    Engineer(std::string n, std::string g, int a, int id, double s, std::string sp, int ex, int overHour, int overRate)
        : Employee(n, g, a, id, s), speciality(sp), exp(ex), overtimeHours(overHour), overtimeHourRate(overRate) {}

    void setSpeciality(std::string sp)
    {
        speciality = sp;
    }

    std::string getSpecilality()
    {
        return speciality;
    }

    void setExp(int ex)
    {
        exp = ex;
    }

    int getExp()
    {
        return exp;
    }

    void setOvertimeHours(int overtimeH)
    {
        overtimeHours = overtimeH;
    }
    int getOvertimeHours()
    {
        return overtimeHours;
    }

    void setOvertimeHoursRate(int overtimeHrate)
    {
        overtimeHourRate = overtimeHrate;
    }

    int getOvertimeHourRate()
    {
        return overtimeHourRate;
    }

    void displayEngineerInfo()
    {
        Employee::displayEmployeeInfo();
        std::cout << "Speciality: " << speciality << std::endl
                  << "Expertise: " << exp << " Years" << std::endl
                  << "Overtime Hours: " << overtimeHours << " Hours" << std::endl
                  << "Overtime Hour Rate: " << overtimeHourRate << "%" << std::endl;
    }
};

int main()
{
    std::cout << "Person Class...\n ============" << std::endl;
    Person p("Ahmed", "Male", 23);
    p.displayPersonInfo();
    std::cout << "========================" << std::endl;

    std::cout << "Student Class...\n ============" << std::endl;
    Student st("Mohammed", "Male", 20, 3, 22011303, 2.6, "Mechatronic Engineering Department");
    st.displayStudentInfo();
    std::cout << "========================" << std::endl;

    std::cout << "Employee Class...\n ============" << std::endl;
    Employee e("Mona", "Female", 33, 303112, 5700);
    e.displayEmployeeInfo();
    std::cout << "========================" << std::endl;

    std::cout << "Sales Employee Class...\n ============" << std::endl;
    Sales sl("Norhan", "Female", 27, 27219, 7000, 20000, 70.2);
    sl.displaySales_empInfo();
    std::cout << "========================" << std::endl;

    std::cout << "Engineer Employee Class...\n ============" << std::endl;
    Engineer en("Mohammed", "Male", 24, 22011303, 20000, "Robotics Engineer", 3, 2, 40);
    en.displayEngineerInfo();
    std::cout << "========================" << std::endl;

    return 0;
}