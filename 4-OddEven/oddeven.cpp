
#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int num;
  cout << "Enter a  Number: ";
  cin >> num;

  if (num % 2 == 0)
    cout << num << " is Even.";
  else
    cout << num << " is Odd.";

  return 0;
}