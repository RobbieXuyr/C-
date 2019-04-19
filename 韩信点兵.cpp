#include <iostream>
class HanXin
{
	public:
		HanXin(int x);
		void line357(int x,int y,int z);
		//int line5(int x);
		//int line7(int x);
		void showMany();
	private:
		int num;
 }; 
int main() 
{
    int n, n1, n2,n3;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2 >> n3;
        HanXin hx(0);  //韩信
        hx.line357(n1,n2,n3);  
        //hx.line5(n2);   //5人一排
        //hx.line7(n3);   //7人一排
        hx.showMany();
    }
}
HanXin::HanXin(int x)
{
	num=x;
}
void HanXin::line357(int x,int y,int z)
{
	int k=0;
	for(int i=10;i<=100;i++)
	{
		if(i%3==x&&i%5==y&&i%7==z) {
		
		num=i;
		break;
		}
	}
}
void HanXin::showMany()
{
	if (num<=100&&num>=10) std::cout<<num<<std::endl;
	else {std::cout<<"Impossible"<<std::endl;}
}



















