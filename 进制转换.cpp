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
        Number no1(n1);     //n1��10����������
        no1.converto(n2);  //no3��n2���Ƶ�������
        //no3.show();     //������
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
