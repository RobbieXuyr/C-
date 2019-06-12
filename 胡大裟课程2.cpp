/*
1、顺序图：最基本的，想的整个流程和框架、步骤 
2.UMCl统一建模语言：实现后再用具体的语言 
3. 软件工程师，软件设计 
4.分为两个部分：程序设计和算法 
5.12345每个步骤的逻辑关系 
6. 先有软件设计图：大的框架，再有具体的功能实现
7.有很多死的语法知识，未来期末考试，要自己去看
*/

//多态可以拿来干什么？怎么做？ 
#include <iostream>
using namespace std;
class parent
{
	public:
	    //用virtual享用多态的效果 
		virtual void show() const  //虚函数和多态 :父子之间同名函数加上virtual->实现多态 
		{
			cout<<"parent!!!"<<endl;
		}
};
class child:public parent{
	public:
		
		virtual void show() const 
		{
			cout<<"child!!!"<<endl;
		}
};

//这个像一个规则 
void show(const parent &p)//常对象 ,通过基类的引用 
{
	p.show();
}

int main()
{
	//parent p;
	//p.show();
	//c.show();
    //c.parent::show();//用父类的show，类似于打标签
    //你打扮一下，就代表你的老爸去开家长会了 
    //招摇撞骗 //整个第四章都可以压缩成这两行代码 
    /*child c;
    parent *p=  &c;//取出儿子的地址弄成父类的指针 //现代语言： parent &p=c; 引用，p只是c的别名 
	p->show(); //加了virtual后，这个show也应该是c对象的show，指针只是放它的一个地方,所以show的还是child */
	//parent p1=c; 
	//p1.show();
	//不同的对象来，展现的效果、结果是不一样的 
	parent p;
	show(p);
	child c;
	show(c);
	//grandchild gc;//不用管parent、child了，只用再写一个新类就行了，多态想达到的目标 
	//show(gc); 

	
	//p->child::show(); //被禁止 
	return 0; 
 } 
