/*Create a Coordinate class for 3 variables x,y and z and overload comma operator such that when you write c3=(c1,c2 ) then c2 is assigned to c3. Where c1,c2 and c3 are objects of 3D coordinatre class*/
#include<iostream>
using namespace std;
class Coordinates
{
  private:
  int x,y,z;
  public:
  Coordinates()
  { x=0, y=0, z=0;}
  Coordinates(int x, int y, int z)
  {
    this->x=x;
    this->y=y;
    this->z=z;
  }
  void display()
  {
    cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
  }
  Coordinates & operator,(Coordinates c)
  {
    this->x=c.x;
    this->y=c.y;
    this->z=c.z;
    return *this;
  }

};

int main()
{
 Coordinates c1(5,6,7),c2(3,4,5);
 Coordinates c3;
 c3=(c1,c2);
 c3.display();
 return 0;
}
