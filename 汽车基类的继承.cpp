#include <iostream>
//ͨ����������õ����麯�� 
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
		cout<<"��̥��:"<<wheels<<" ����:"<<weight<<"Kg "<<endl<<endl;
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
			cout<<"�˽γ�������ؿͣ�"<<passenger_load<<"��"<<endl;
			Vehicle::Show();
		}
	private:
		int passenger_load;
};
class Bus:public Vehicle//��̬ 
{
	public:
		Bus(int w, int wei, int p):Vehicle(w,wei)
		{
			passenger_load=p;
		}
		virtual void Show() const
		{
			cout<<"�˿ͳ�������ؿͣ�"<<passenger_load<<"��"<<endl;
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
			cout<<"�����г�������ؿͣ�"<<passenger_load<<"��"<<endl;
			Vehicle::Show();
		}
	private:
		int passenger_load;
}; 

void show(const Vehicle &p)//ͨ�����������ʵ���麯�� 
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
