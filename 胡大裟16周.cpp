//

#include <iostream>
using namespace std;//命名空间用来划区域 
namespace myspace{

class Bigthing
{
	
};
class Otherthing{
};
class something:public Bigthing
{
	const Otherthing ot;
	public:
		Someting()
		{
			
		}
		Something(int n):Bigthing(n),ot(n)
		{
		}
		~Something() 
		{
			
		}
		virtual void show() const
		{
			
		}
}; 
int main()
{
	Something st(123),st1(321);//重点：继承的构造函数的继承与写法 
	st.show();
	st1.show()
	return 0;
} 



//把构造函数提到私有去 
class something:public Bigthing
{
	const Otherthing ot;
	Someting()
		{
		}
	Something(int n):Bigthing(n),ot(n)
		{
		}
	static int x; //x、creat 属于整个类的,用static对整个类作用，若只局限于对象层面，则没什么意义 
	public:
        static Something* create(int n){
        	return new Something(n);
		}
		
		
		//把（）进行重载 
		int operator()(int n){//function Object 
		} 
		
		
		
		~Something() 
		{
			
		}
		virtual void show() const
		{
			
		}
}; 
}
int main()
{
	//在这里类和命名空间的本质并没有太大的区别 
	myspace::Something *st=myspace::Someting::create(123),*st1= st->create(321);//creat 并不属于某个对象，而是属于类的
	//关于作用域的范围 
	//这种方法称为设计模式，Java里面很多 
	st.show();
	st1.show(); 
	return 0;
} 
