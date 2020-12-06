#include <iostream>
using std::cin;
using std::cout;

class Car
{
private:
  int d, c;

public:
  Car(int d1, int c1)
  {
    d = d1;
    c = c1;
  }
  int getMileage()
  {
    return d / c;
  }
};
int main()
{
  Car c1(200, 20);
  int m1 = c1.getMileage();

  cout << "MileAge of the Car: " << m1;

  return 0;
}
