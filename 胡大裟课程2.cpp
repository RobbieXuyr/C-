/*
1��˳��ͼ��������ģ�����������̺Ϳ�ܡ����� 
2.UMClͳһ��ģ���ԣ�ʵ�ֺ����þ�������� 
3. �������ʦ�������� 
4.��Ϊ�������֣�������ƺ��㷨 
5.12345ÿ��������߼���ϵ 
6. ����������ͼ����Ŀ�ܣ����о���Ĺ���ʵ��
7.�кܶ������﷨֪ʶ��δ����ĩ���ԣ�Ҫ�Լ�ȥ��
*/

//��̬����������ʲô����ô���� 
#include <iostream>
using namespace std;
class parent
{
	public:
	    //��virtual���ö�̬��Ч�� 
		virtual void show() const  //�麯���Ͷ�̬ :����֮��ͬ����������virtual->ʵ�ֶ�̬ 
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

//�����һ������ 
void show(const parent &p)//������ ,ͨ����������� 
{
	p.show();
}

int main()
{
	//parent p;
	//p.show();
	//c.show();
    //c.parent::show();//�ø����show�������ڴ��ǩ
    //����һ�£��ʹ�������ϰ�ȥ���ҳ����� 
    //��ҡײƭ //���������¶�����ѹ���������д��� 
    /*child c;
    parent *p=  &c;//ȡ�����ӵĵ�ַŪ�ɸ����ָ�� //�ִ����ԣ� parent &p=c; ���ã�pֻ��c�ı��� 
	p->show(); //����virtual�����showҲӦ����c�����show��ָ��ֻ�Ƿ�����һ���ط�,����show�Ļ���child */
	//parent p1=c; 
	//p1.show();
	//��ͬ�Ķ�������չ�ֵ�Ч��������ǲ�һ���� 
	parent p;
	show(p);
	child c;
	show(c);
	//grandchild gc;//���ù�parent��child�ˣ�ֻ����дһ����������ˣ���̬��ﵽ��Ŀ�� 
	//show(gc); 

	
	//p->child::show(); //����ֹ 
	return 0; 
 } 
