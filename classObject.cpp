#include <iostream>
using namespace std;
using std ::string;

class Student
{
public:
    string Name;
    string Department;
    int Age;

    void introduceYourself()
    {

        std::cout << "My name is:" << Name << std::endl;
        std::cout << "My Department is:" << Department << std::endl;
        std::cout << "My Age is:" << Age << std::endl;
    }
};

int main()
{

    Student student1;
    student1.Name = "Md Sujan";
    student1.Department = "CSE";
    student1.Age = 23;
    student1.introduceYourself();

    Student student2;
    student2.Name = "Sheme";
    student2.Department = "CSE";
    student2.Age = 23;
    student2.introduceYourself();

    return 0;
}