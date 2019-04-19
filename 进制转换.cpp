#include <iostream>
class Number
{
    public:
    	Number(int x);
		void converto(int x); 
	private:
		int num;
}; 

int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1);     //n1是10进制正整数
        no1.converto(n2);  //no3是n2进制的正整数
        //no3.show();     //输出结果
    }
}

Number::Number(int x)
{
	num=x;
}
void Number::converto(int x)
{
	while(num!=0)
	{
		std::cout<<(num%x);
		num/=x;
	}
	std::cout<<std::endl;
}
