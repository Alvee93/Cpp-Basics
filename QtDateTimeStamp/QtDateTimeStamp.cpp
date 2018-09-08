#include <iostream>
#include <QDateTime>

using namespace std;

void main(){

    QDateTime dateTime = dateTime.currentDateTime();
    string d_t = dateTime.toString("yyyy-MM-dd-hh-mm-ss-zzz").toStdString();

    cout << "Current date-time as format- yyyy-MM-dd-hh-mm-ss-zzz: " + d_t << endl;

}