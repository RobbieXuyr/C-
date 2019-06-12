//ԭ���⣺�ҳ�100����1000�ĳ���������ϹJB�Ҷ���ģ���ͨ��������̴�c��c++
//���������ࣺNumber��NumberSet���ϣ�SuperPrime
//��һ��������ṹ�����������ο����� 
//����������Ѷ��� 
//ѧ�����    ��װ����������װ��������װ������   ����������Է�װ�÷ǳ�Ư�������ܸ��ģ����� 
//��װ�͹�һ�� 
//������������� 
//OOP 
//̫��ˣ�� 
 
class Number {
public:
  Number(int num):mNum(num) //���캯�����ʽ 
  {
  	
  }
  //�������캯��
  Number(const Number &n):mNum(n.mNum) 
  {
  }
  ~Number();
  NumberSet split() 
  {//���� 
  	NumberSet ns;
  	int n = mNum;
  	while(n != 0) 
	  {
  	  int d = n % 10;
  	  Number dig(d);
  	  ns.add(dig);
  	  n = n / 10;
	}
	return ns;
  }
  bool isPrime() 
  {
  	for(int i = 2; i < mNum; ++i) 
	{
  	  if(mNum % i == 0)
  	    break;
	}
	if(i != mNum)
	  return false;
	return true;
  }
private:
  const int mNum;
};

class NumberSet //Number �ļ��� 
{
private:
  Number *nums[20];//ֻ��װ20������ָ�룺�ǷŶ����λ�ã������ǷŵĶ�������ָ�� 
  int size;//ָ���ǵ�ǰװ������ 
public:
  NumberSet() 
  {
  	size = 0;
  	for(int i = 0; i < 20; ++i)
  	  nums[i] = NULL;//�� 
  }
  ~NumberSet() {
  	for(int i = 0; i < size; ++i)//��ǰ�ж��پͷŶ��� 
  	  delete nums[i];//�ͷ� 
  }
  void add(const Number &n)    // const��ֹ�ı� �������÷�ֹ�ٵ��ù��캯��  ������һ��������װ��ȥSet��ԭ���Ķ��󲻸ı䣬���ܸ��� 
  {
  	if(size!=20&&nums[size]==NULL)
	  { 
	      nums[size] = new/*����һ��ָ��*/ Number(n); //�������캯��,copy����  
	      size+=1;
      }
  }
  //Number& sum()//sumҪ����һ����������� 
  Number sum() 
  {
  	Number sum(0);
  	for(int i = 0; i < size; ++i) {
  	  if(nums[i] != NULL)
  	    sum.add(*(nums[i]));//nums[i]ָ�����Ƕ�������λ��
		  //����Զ���ĳ�Աֱ�ӷ���
		  //ѧϰ���ַ��� 
	}
	return sum;
  }
};
class SuperPrime : public Number {
public:
  SuperPrime(int num);
  ~SuperPrime();

  bool isPrime();

  Prime sumBit();
  Prime multiBit();
  Prime sqaureSumBit();
private:
  const int num;
}
int main()
{
    SuperPrime sp(113);
    if(sp.isPrime()) {
        ; // do something
    }
}

