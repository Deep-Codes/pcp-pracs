
#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int i, num;
  int flag = 0;
  cout << "Enter a Number: ";
  cin >> num;
  for (i = 2; i <= num / 2; ++i)
  {
    if (num % i == 0)
    {
      flag = 1;
      break;
    }
  }
  if (num == 1)
  {
    cout << "1 is neither Prime nor Composite.";
  }
  else
  {
    if (flag == 1)
      cout << num << " is Prime.";
    else
      cout << num << " is not Prime.";
  }
  return 0;
}