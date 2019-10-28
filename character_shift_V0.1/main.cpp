#include <iostream>
#include <string>
using namespace std;
int main()
{
  string c_text = "DRO MSDI LBSWC GSDR CEWWOB'C NOVSQRDC, GSDR MYVYBPEV ZBYNEMO SX DRO WKBUOD CDKXNC KXN RKGKSSKX WECSM CZSVVSXQ YXDY LOKMROC";
  //cout << "Please enter the cipher text: ";
  //getline (cin, c_text);
  //cout << c_text.length() << endl;
  
  for (int i = 0; i < c_text.length(); i++) {
      int x = (int) c_text[i];
      //cout << x << endl;
      if ( x>=75) {
          x = x-10;
          cout << (char) x;
      }
      else if (x==32) {
          cout << " ";
      }
      else if (x==39) {
          cout << "'";
      }
      else if (x==44) {
          cout << ",";
      }
      else {
          cout << (char) (x +16);
      }
  }
}