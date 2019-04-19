#include <iostream>
class Number
{
	public:
		Number(); 
		Number(int x);
		void show();
		void get(int x);
		int maxDivisor(Number x1,Number x2,Number x3);
	private:
		int num;
		int max;
		
};
int main() 
{
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) 
	{
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2);
        Number no3;
        no3.maxDivisor(no1,no2,no3);  //最大公约数
        //no3.show(no3.maxDivisor(no1,no2,no3));//有问题，为什么这里show的话还是构造时num的初值，无法改变 
    }
    return 0;
}
Number::Number()
{
}
Number::Number(int x)
{
	num=x;
}
void Number::show()
{
	std::cout<<num<<std::endl;
}
int Number::maxDivisor(Number x1,Number x2,Number x3)
{
	for(int i=1;i<=x1.num&&i<=x2.num;++i)
	{
		if(x1.num%i==0&&x2.num%i==0)
		{
			//std::cout<<i;
			x3.get(i);
		}
	}
	x3.show();
}
void Number::get(int x)
{
	num=x;
	//std::cout<<num<<std::endl;
}
