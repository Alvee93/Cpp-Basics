#include <iostream>
#include <string>
using namespace std;
int main()
{
    string c_text = "DRO MSDI LBSWC GSDR CEWWOB'C NOVSQRDC, GSDR MYVYBPEV ZBYNEMO SX DRO WKBUOD CDKXNC KXN RKGKSSKX WECSM CZSVVSXQ YXDY LOKMROC";
     
    for (int shift=0; shift<26; shift++ ) {
        
        for (int i = 0; i < c_text.length(); i++) {
            
            int x = (int) c_text[i];
            //cout << x << endl;
            if ( x>=(90-shift+1)) {
                x = x-(26-shift);
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
                cout << (char) (x + shift);
            }
        }
        cout << endl << "-----------------------------------------------------" << endl;
    }
}
