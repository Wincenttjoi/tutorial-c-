#include <iostream>
using namespace std;

void printNumber(int* numberPtr) {
  cout << *numberPtr << endl;
} 


void print(void* ptr, char type) {
  switch(type) {
    case 'i': 
      cout << *((int*)ptr) << endl;
      break;
  }
}

int main()
{
  int number = 5;
  printNumber(&number);
  print(&number, 'i');

  system("pause>0");
  return 0;
}