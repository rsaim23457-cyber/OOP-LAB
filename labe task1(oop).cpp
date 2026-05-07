# include <iostream>
using namespace std;
class shape{
public:
  virtual double area(){
  	return 0;
  }	
};
class Rectangle: public shape{
	private:
		double length, width;
	public:
		Rectangle (double w, double l): length(l), width(w){}
	    double area(){
	    return length*width;
	}
};
class circle: public shape{
	public:
	double radius;
	circle (double r): radius(r){}
	double area(){
		return 3.14*radius*radius;
	}
};
int main(){
 shape* s1=new Rectangle(4,5);
 shape* s2=new circle(3);
 cout<<"Rectangle area:"<<s1->area()<<endl;
 cout<<"Circle area:"<<s2->area()<<endl;
  
  delete s1;
  delete s2;
  return 0;
 }
 
