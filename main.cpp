#include <iostream>
#include <string>
#include <cctype>
using namespace std;




int main() {
    string a,b;
    cin >> a >> b;
    for(int i=0;i<a.size();i++){
        a[i] = tolower(a[i]);
    }
    for(int i=0;i<b.size();i++){
        b[i] = tolower(b[i]);
    }
    int val;
    val = a.compare(b);
    if (val>0)
        cout << 1;
    else if (val<0)
        cout << -1;
    else
        cout << val;
    return 0;
}
