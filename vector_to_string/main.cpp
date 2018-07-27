#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    int myints[] = {13,2,35,29, 55};
    vector<int> v (myints, myints + sizeof(myints) / sizeof(int) );
    
    cout << "The contents of v are: ";
    /*for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        
        cout << ' ' << *it;
    }
    cout << '\n';    
    */
    stringstream ss;
    for(size_t i = 0; i < v.size(); ++i)
    {
      if(i != 0)
        ss << ", ";
      ss << v[i];
    }
    string s = ss.str();
    cout << s << endl;
}
