#include <iostream>
//javascript 和 java没有任何关系    //javascript是肯定去要学的 
//微软的Typescript 
//先搞清楚世界的潮流使什么样子，把方向搞对 
//现实世界是现有对象再有类，但面向对象是反过来的 

//现在的工作趋势：一块是负责架子，一块负责填代码；这两块要分清楚 

//2、3、4章知识，就是类中和类之间横向、纵向的扩展
//所有语言大同小异，但没门语言的侧重点不同；但根子里的思想是差不多的 

class Human
{
	public:
		virtual void learn()=0;//纯虚函数 
		virtual void teach()=0;
};
class Student:public Human
{
	Student(){
	} 
	~Student(){
	}
	virtual void Teach()
	{
		//nothing
	}
	virtual void learn()
	{
		//something
	}
};
class teacher:public Human
{
	//Student sts[54];
	Human students[54];//老师不只能对学生，任何人都可以成为学生，人中有老师和学生
	public:
	   Teacher() 
	   {
	   	students[0]=new Student();
	   	students[1]=new Student();
	   }
	~Teacher()
	{
		//delete Student[0];
		delete[] students;//直接把所有的对象删除掉 
	}
	virtual void Teach() //学生、老师的角色经常切换，所以都写 
	{
		//something
	}
	virtual void learn()
	{
		//nothing
	}
};

//模板：比class更泛化的东西
//把类与类之上的区别都抽象了 ->  模板 
//最后这个类称为模板类 

//先思考有没有必要去做泛化

//学STL；看STL源代码
//boost.org  C++非官方库 

 



//这个叫泛化编程：Genral Programming//当不需要泛化时，没有任何去使用它的意义 
template<Type1,Type2>//给计算机一个解释，先别管Type1， Type2是什么东西 
class Room//容器 container 
{
	//Typle1 *people[];
	//Table *tabs[];
	//Chair *chairs[];
	//Type2 *furs[]; 
	Type1 *ts1[];
	Type2 *ts2[]; 
};
int main ()
{
	Room<Human,Furniture> classroom;  //当容器中装了人和家具就是教室了
	Room<Boss,Commidy>  supermarket; 
}
