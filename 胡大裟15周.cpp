//找一个小型、中型项目临摹，学习，去找开源项目
//文本文件对应asscii码
//-std=c++11 在编译时添加c++标准 
//去跟着别人的代码走 follow
//图形图像编程：理解图形图像原理 
 

#include <iostream>//stl标准类库，标准模板库 
#include <fstream>
#include <string>
 
int main() {
  std::string filename = "Test.b";
  // 准备读取文件
  double d = 3.14;
  std::ofstream(filename, std::ios::binary).write(reinterpret_cast<char*>(&d), sizeof d)
     << 123 << "abc";
  // 打开文件以读取
  std::ifstream istrm(filename, std::ios::binary);
  if (!istrm.is_open()) {
    std::cout << "failed to open " << filename << '\n';
  } else {
    double d;
    istrm.read(reinterpret_cast<char*>(&d), sizeof d); // 二进制输入
    int n;
    std::string s;
    if (istrm >> n >> s)                               // 文本输入
      std::cout << "read back from file: " << d << ' ' << n << ' ' << s << '\n';
  }
} 
