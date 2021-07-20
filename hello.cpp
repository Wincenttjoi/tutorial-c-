#include <iostream>
using std::string;

class AbstractEmployee {
  virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
private:
  string Name;
  string Company;
  int Age;

public:
  void setName(string name) {
    Name = name;
  }

  string getName() {
    return Name;
  }

  void setCompany(string company) {
    Company = company;
  }

  string getCompany() {
    return Company;
  }

  void setAge(int age) {
    Age = age;
  }

  int getAge() {
    return Age;
  }

  void IntroduceYourself()
  {
    std::cout << "Name - " << Name << std::endl;
    std::cout << "Company - " << Company << std::endl;
    std::cout << "Age - " << Age << std::endl;
  }

  Employee(string name, string company, int age)
  {
    Name = name;
    Company = company;
    Age = age;
  }

  void AskForPromotion() {
    if (Age > 30) {
      std::cout << Name << " got promoted!" << std::endl;
    } else {
      std::cout << "Sorry you scrub" << std::endl;
    }
  }
};

class Developer:public Employee {
public:
  string FavProgrammingLanguage;
  Developer(string name, string company, int age, string favProgrammingLanguage) :Employee(name, company, age) {
    FavProgrammingLanguage = favProgrammingLanguage;
  }

  void FixBug() {
    std::cout << getName() << " fix bug using " << FavProgrammingLanguage << std::endl;
  }

};

int main()
{
  Employee employee1 = Employee("Wincent", "Shopee", 25);
  employee1.IntroduceYourself();
  employee1.AskForPromotion();

  Employee employee2 = Employee("John", "Shopee", 35);
  employee2.IntroduceYourself();
  employee2.AskForPromotion();


  employee1.setAge(39);
  std::cout << employee1.getName() << " is " << employee1.getAge() << " years old" << std::endl;

  Developer d = Developer("Ace", "Google", 5, "C++");
  d.FixBug();
  d.AskForPromotion();
}