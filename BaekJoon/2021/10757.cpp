#include <iostream>
#include <string>
 
using namespace std;
 
string func(string& a, string& b) {
    int aSize = a.length();
    int bSize = b.length();
    
    string rans = "";
    int c = 0;
    while (aSize > 0 || bSize > 0) {
        int k1 = 0;
        if(aSize>0){
            k1 = a[--aSize] - '0';
        }
        int k2 = 0;
        if (bSize > 0) {
            k2 = b[--bSize] - '0';
        }
        int ret = k1 + k2 + c;
        c = ret / 10;
        ret %= 10;
        char cur = ret + '0';
        rans += cur;
    }
    if (c > 0) {
        rans += c + '0';
    }
    string ans = "";
    for (int i = (int)rans.length()-1; i >= 0; --i) {
        ans += rans[i];
    }
    return ans;
}
int main(void) {
    string a;
    string b;
    cin >> a >> b;
    cout << func(a, b) << "\n";
 
    return 0;
}