#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<map>
using namespace std;

bool fun(string a,string b){
    string p1=a+b;
    string p2=b+a;
    if(p1<p2)
        return true;
    return false;
}
int main(){
    int n;
    vector <string> v;
    vector <string>::iterator it;
    while(1){
        cin >> n;
        if(n==0)
            return 0;
        while(n--){
            string s;
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(),v.end(),fun);
        reverse(v.begin(),v.end());
        for(it=v.begin();it!=v.end();it++)
            cout << *it;
        cout << endl;
        v.clear();
    }
}
