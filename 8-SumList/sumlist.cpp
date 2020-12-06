
#include <iostream>
using std::cin;
using std::cout;

int main()
{
  int l;
  int temp = 0;
  cout << "Enter a  Length: ";
  cin >> l;
  int x[l];

  for (int i = 0; i < l; i++)
  {
    cin >> x[i];
  }

  for (int i = 0; i < l; i++)
  {
    temp += x[i];
  }

  cout << "Sum of the List: " << temp;

  return 0;
}