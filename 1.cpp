/*Defijne a class Complex with appropriate instance variables and member functions. Overload following operators: 
 a. << insertion operator
 b. >> extraction operator*/
 
#include<iostream>
using namespace std;
class Complex
{
  private:
   int real, img;
  public:
   Complex(){ cout<<"DC called"<<endl;}
   Complex(int r, int i)
   {
     cout<<"PC called"<<endl;
     real=r; img=i;
   }
   void setData(int real, int img)
   {
     this ->real=real;
     this ->img=img;
   }
   void display()
   {
     cout<<"Display called"<<endl;
     cout<<"real= "<<real<<"img= "<<img<<endl;
   }
   
   friend istream& operator>>(istream &, Complex &);
   friend ostream& operator<<(ostream &, Complex );
};

istream& operator>>(istream &is, Complex &c)
{
 // cout<<"Insertion operator called"<<endl;
  is>>c.real>>c.img;
  return is;
}
ostream& operator<<(ostream &os, Complex c)
{
  c//out<<"Exertion operator called"<<endl;
  os<<"real= "<<c.real<<" img= "<<c.img<<endl;
  return os;
}

int main()
{
  Complex c1,c2(11,18);
  cout<<"Enter the two complex numbers: ";
  cin>>c1>>c2;;
  cout<<c1<<c2;
  return 0;
}
