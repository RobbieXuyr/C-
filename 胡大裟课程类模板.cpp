//原课题：找出100——1000的超级素数（瞎JB乱定义的），通过这个过程从c到c++
//定义三个类：Number、NumberSet集合，SuperPrime
//不一定用这个结构，更多的是起参考作用 
//疯狂地往上面堆东西 
//学会如何    封装！！！！封装！！！封装！！！   这个东西可以封装得非常漂亮，各管各的，调理 
//封装和归一化 
//真正地面向对象 
//OOP 
//太好耍了 
 
class Number {
public:
  Number(int num):mNum(num) //构造函数表达式 
  {
  	
  }
  //拷贝构造函数
  Number(const Number &n):mNum(n.mNum) 
  {
  }
  ~Number();
  NumberSet split() 
  {//右移 
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

class NumberSet //Number 的集合 
{
private:
  Number *nums[20];//只能装20个对象指针：是放对象的位置，并不是放的对象本身，放指针 
  int size;//指的是当前装的容量 
public:
  NumberSet() 
  {
  	size = 0;
  	for(int i = 0; i < 20; ++i)
  	  nums[i] = NULL;//空 
  }
  ~NumberSet() {
  	for(int i = 0; i < size; ++i)//当前有多少就放多少 
  	  delete nums[i];//释放 
  }
  void add(const Number &n)    // const防止改变 对象，引用防止再调用构造函数  复制了一个对象再装进去Set，原本的对象不改变，各管各的 
  {
  	if(size!=20&&nums[size]==NULL)
	  { 
	      nums[size] = new/*返回一个指针*/ Number(n); //拷贝构造函数,copy出来  
	      size+=1;
      }
  }
  //Number& sum()//sum要返回一个对象的引用 
  Number sum() 
  {
  	Number sum(0);
  	for(int i = 0; i < size; ++i) {
  	  if(nums[i] != NULL)
  	    sum.add(*(nums[i]));//nums[i]指代的是对象做的位置
		  //避免对对象的成员直接访问
		  //学习这种方法 
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

