#include <iostream>
using namespace std;
class Shape
{
public:
  virtual void volume()
  {
    cout << "Volume is : " << endl;
  }
};

class Cylinder : public Shape
{
  int r, h;

public:
  Cylinder()
  {
    cout << "Radius of Cylinder: ";
    cin >> r;
    cout << "Height of Cylinder: ";
    cin >> h;
  }
  void volume()
  {
    cout << "Volume of cylinder is: " << 3.14 * r * r * h;
  }
};
int main()
{
  Shape *s;
  Cylinder c1;
  s = &c1;
  s->volume();
  return 0;
}