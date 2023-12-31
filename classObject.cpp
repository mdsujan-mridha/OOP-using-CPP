#include <iostream>
using namespace std;
using std ::string;

class Student
{
private:
    string Name;
    string Department;
    int Age;

public:
    void setName(string name) // set method
    {
        Name = name;
    }
    string getName() // get method
    {
        return Name;
    }
    void setDepartment(string department)
    {
        Department = department;
    }
    string getDepartment()
    {
        return Department;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void introduceYourself()
    {

        std::cout << "My name is:" << Name << std::endl;
        std::cout << "My Department is:" << Department << std::endl;
        std::cout << "My Age is:" << Age << std::endl;
    }
    // add constructor
    Student(string name, string department, int age)
    {
        Name = name;
        Department = department;
        Age = age;
    }
};

int main()
{

    // Student student1;
    // student1.Name = "Md Sujan";
    // student1.Department = "CSE";
    // student1.Age = 23;
    // student1.introduceYourself();

    // Student student2;
    // student2.Name = "Sheme";
    // student2.Department = "CSE";
    // student2.Age = 23;
    // student2.introduceYourself();
    Student student1 = Student("Sheme", "CSE", 23);
    student1.introduceYourself();
    Student student2 = Student("Sujan", "CSE", 23);
    student2.introduceYourself();

    Student student3 = Student("Tamanna", "EEE", 23);
    student3.introduceYourself();
    student3.setDepartment("CSE");
    std::cout << "Student name is: " << student3.getName() << " student department is: " << student3.getDepartment() << " student age is:" << student3.getAge() << std::endl;



    student1.setAge(24);
    std::cout << student1.getName() << " is " << student1.getAge() << " years old " << std::endl;

    return 0;
}