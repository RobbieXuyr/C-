#include <iostream>
//javascript �� javaû���κι�ϵ    //javascript�ǿ϶�ȥҪѧ�� 
//΢���Typescript 
//�ȸ��������ĳ���ʹʲô���ӣ��ѷ����� 
//��ʵ���������ж��������࣬����������Ƿ������� 

//���ڵĹ������ƣ�һ���Ǹ�����ӣ�һ�鸺������룻������Ҫ����� 

//2��3��4��֪ʶ���������к���֮������������չ
//�������Դ�ͬС�죬��û�����ԵĲ��ص㲻ͬ�����������˼���ǲ��� 

class Human
{
	public:
		virtual void learn()=0;//���麯�� 
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
	Human students[54];//��ʦ��ֻ�ܶ�ѧ�����κ��˶����Գ�Ϊѧ������������ʦ��ѧ��
	public:
	   Teacher() 
	   {
	   	students[0]=new Student();
	   	students[1]=new Student();
	   }
	~Teacher()
	{
		//delete Student[0];
		delete[] students;//ֱ�Ӱ����еĶ���ɾ���� 
	}
	virtual void Teach() //ѧ������ʦ�Ľ�ɫ�����л������Զ�д 
	{
		//something
	}
	virtual void learn()
	{
		//nothing
	}
};

//ģ�壺��class�������Ķ���
//��������֮�ϵ����𶼳����� ->  ģ�� 
//���������Ϊģ���� 

//��˼����û�б�Ҫȥ������

//ѧSTL����STLԴ����
//boost.org  C++�ǹٷ��� 

 



//����з�����̣�Genral Programming//������Ҫ����ʱ��û���κ�ȥʹ���������� 
template<Type1,Type2>//�������һ�����ͣ��ȱ��Type1�� Type2��ʲô���� 
class Room//���� container 
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
	Room<Human,Furniture> classroom;  //��������װ���˺ͼҾ߾��ǽ�����
	Room<Boss,Commidy>  supermarket; 
}
