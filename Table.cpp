#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout << left;
  cout << setw(12) << "Miles" << setw(12) << "Kilometers" << setw(6) << "|" << setw(12) << "Kilometers"
       << setw(12) << "Miles" << endl;
  cout << "--------------------------------------------------------------------" << endl;
  int miles = 1; int kilometers = 20;
  for (int i = 1; i <= 10; miles++, kilometers += 5, i++)
  {
    cout << setprecision(3) << fixed;
    cout << setw(12) << miles << setw(12) << miles * 1.609 << setw(6) << "|" << setw(12) << kilometers << setw(12)
         << kilometers / 1.609 << endl;
  }
  return 0;
}

