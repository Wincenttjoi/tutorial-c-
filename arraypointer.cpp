#include <iostream>
using namespace std;

int main()
{
  int luckyNumbers[5] = {2, 3, 5, 7, 9};
  cout << luckyNumbers << endl;
  cout << &luckyNumbers[0] << endl;
  cout << &luckyNumbers[1] << endl;

  for (int i = 0; i <= 4; i++)
  {
    cin >> luckyNumbers[i];
  }

  
  for (int i = 0; i <= 5; i++)
  {
    cout << *(luckyNumbers + i) << " ";
  }

  system("pause>0");
  return 0;
}