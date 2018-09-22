#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int r_num = rand() %100 +1;
    while (r_num==100){
        r_num = rand() %100 +1;
    }
    cout << r_num << endl;

    bool is_found = 0;
    int lim = 0;
    int r_db[100];
    r_db[0] = r_num;

    for (int i=1; i<65535; i++){
        r_num = rand() %100;
        //cout << r_num << endl;

        for (int j=0; j<i; j++){
            if (r_db[j] == r_num) {
                is_found = 1;
                break;
            }
        }
        if (is_found==1){
            i--;
            is_found = 0;
        }
        else if (is_found!=1) {
            r_db[i] = r_num;
            cout << r_db[i] << endl;
            lim++;
        }
        if (lim==98) break;
    }
    return 0;
}
