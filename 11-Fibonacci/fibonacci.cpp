
#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int n;
  int temp = 0;
  int n1 = 0;
  int n2 = 1;
  cout << "Enter the Limit: ";
  cin >> n;

  while (temp <= n)
  {
    cout << temp << " , ";
    n1 = n2;
    n2 = temp;
    temp = n1 + n2;
  }

  return 0;
}