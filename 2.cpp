/*Define a class Complex with appropriate istance variables and member functions. One of the functions should be setData() to set the properties of the object. Make sure the names of formal arguments are the same as names of instance varialbes.*/

#include<iostream>
using namespace std;
class Complex
{
  private:
   int real;
   int img;
  public:
   Complex(){ cout<<"DC called"<<endl;}
   Complex(int real, int img)
   {
     cout<<"PC called"<<endl;
     this->real=real;
     this->img=img;
   }
   void setData(int real, int img)
   {
     cout<<"setData() called"<<endl;
     this->real=real;
     this->img=img;
   }
   void display()
   {
     cout<<"Display function called"<<endl;
     cout<<"real= "<<real<<" img="<<img<<endl;
   }
};

int main()
{
  Complex c1(3,5),c2;
  c2.setData(2,6);
  c1.display();
  c2.display();
  return 0;
}
