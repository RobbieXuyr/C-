//

#include <iostream>
using namespace std;//�����ռ����������� 
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
	Something st(123),st1(321);//�ص㣺�̳еĹ��캯���ļ̳���д�� 
	st.show();
	st1.show()
	return 0;
} 



//�ѹ��캯���ᵽ˽��ȥ 
class something:public Bigthing
{
	const Otherthing ot;
	Someting()
		{
		}
	Something(int n):Bigthing(n),ot(n)
		{
		}
	static int x; //x��creat �����������,��static�����������ã���ֻ�����ڶ�����棬��ûʲô���� 
	public:
        static Something* create(int n){
        	return new Something(n);
		}
		
		
		//�ѣ����������� 
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
	//��������������ռ�ı��ʲ�û��̫������� 
	myspace::Something *st=myspace::Someting::create(123),*st1= st->create(321);//creat ��������ĳ�����󣬶����������
	//����������ķ�Χ 
	//���ַ�����Ϊ���ģʽ��Java����ܶ� 
	st.show();
	st1.show(); 
	return 0;
} 
