#include <iostream>
//通过基类的引用调用虚函数 
using namespace std;
class Vehicle
{
	public:
	Vehicle(int w,int wei)
	{
		wheels=w;
		weight=wei;
	}
	virtual void Show() const
	{
		cout<<"轮胎数:"<<wheels<<" 车重:"<<weight<<"Kg "<<endl<<endl;
	}
	private:
		int wheels;
		int weight;
}; 

class Car:public Vehicle
{
	public:
		Car(int w, int wei, int p):Vehicle(w,wei)
		{
			passenger_load=p;
		}
		virtual void Show() const
		{
			cout<<"此轿车最多能载客："<<passenger_load<<"人"<<endl;
			Vehicle::Show();
		}
	private:
		int passenger_load;
};
class Bus:public Vehicle//多态 
{
	public:
		Bus(int w, int wei, int p):Vehicle(w,wei)
		{
			passenger_load=p;
		}
		virtual void Show() const
		{
			cout<<"此客车最多能载客："<<passenger_load<<"人"<<endl;
			Vehicle::Show();
		}
	private:
		int passenger_load;
};  
class Bike:public Vehicle
{
	public:
		Bike(int w, int wei, int p):Vehicle(w,wei)
		{
			passenger_load=p;
		}
		virtual void Show() const
		{
			cout<<"此自行车最多能载客："<<passenger_load<<"人"<<endl;
			Vehicle::Show();
		}
	private:
		int passenger_load;
}; 

void show(const Vehicle &p)//通过基类的引用实现虚函数 
{
	p.Show();
}
int main ()
{
	Car car(4,5000,5);
	Bus bus(4,20000,20);
	Bike bike(2,5,1);
	show(car);
	show(bus);
	show(bike);
	return 0;
}
