/*Create a Distance class having 2 instance variables feet and inches. Also create default constructor and PC takes 2 varialbes. Now overload () function call operator that taeks 3 arguments a,b and c and set feet= a+c+5 and inches= a+b+15.*/
#include<iostream>
using namespace std;
class Distance
{
  private:
  int feet;
  int inches;
  public:
  Distance(){}
  Distance(int f,int i)
  {
    feet=f;
    inches=i;
  }
  void display()
  {
    cout<<feet<<" Feets and "<<inches<<" Inches"<<endl;
  }
  void operator ()(int a, int b, int c)
  {
    feet=a+c+5;
    inches=a+b+15;
  }
  void setData();
};

int main()
{
  Distance d1,d2(10,20);
  d1(5,10,15);
  d1.display();
  return 0;
}
