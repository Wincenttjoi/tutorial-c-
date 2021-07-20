#include <iostream>
using std::string;

class Employee
{
public:
  string Name;
  string Company;
  int Age;

  void IntroduceYourself()
  {
    std::cout << "Name - " << Name << std::endl;
    std::cout << "Company - " << Company << std::endl;
    std::cout << "Age - " << Age << std::endl;
  }
};

int main()
{
  Employee employee1;
  employee1.Name = "Wincent";
  employee1.Company = "Shopee";
  employee1.Age = 25;
  employee1.IntroduceYourself();

  Employee employee2;
  employee2.Name = "John";
  employee2.Company = "AWS";
  employee2.Age = 35;
  employee2.IntroduceYourself();
}