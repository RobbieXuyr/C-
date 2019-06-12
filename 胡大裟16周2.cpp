//Warning
//Error
//Exception（异常) //上两种处理不了的问题 
//c++中通常将异常定义为一个类 

float something ()
{
	float x=0,y=0; 
	if(y!=0)
	  float z=x/y;
	else
	  throw 8; //异常，告诉这个函数的 外面  
	  //应该写点什么又不知道该写什么（没有需求） 
	return z;   
 } 
int main ()
{
 	try{
 		float z=something();
	 }
	 catch(int n){
	 	if(n--8)
	 	  std::cout<<"Zero division"<<std::endl;
	 }
} 
 
 
 
 
 
 
 
 
 
 
  
