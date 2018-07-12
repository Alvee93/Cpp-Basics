#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  double a = 3.141592653589793;
    
  ostringstream streamObj3;
  streamObj3 << fixed;
  streamObj3 << setprecision(15);
  streamObj3 << a;
  string strObj3 = streamObj3.str();
  
  cout << strObj3;
}
