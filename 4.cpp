/*Create a Complex class and overload assignment operator for the class*/
#include<iostream>
using namespace std;
class Complex
{
  private: 
   int real;
   int img;
  public:
   Complex(){ cout<<"DC called"<<endl;}
   Complex(int r, int i)
   {
     cout<<"PC called"<<endl;
     real=r; img=i;
   }
   void display()
   {
     cout<<"display() called"<<endl;
     cout<<"real= "<<real<<" img= "<<img<<endl;
   }
   Complex & operator =(Complex &c)
   {
      cout<<"Opeartor = called"<<endl;
      this->real= c.real;
      this->img= c.img;
      return *this;
   }
};

int main()
{
  Complex c3, c1,c2(3,4) ;
  c2.display();
  c1=c3=c2;
  c3.display();
  c1.display();
  return 0;
}
