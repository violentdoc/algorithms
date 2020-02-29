#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<utility>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin >> n;
    string s;
    vector < pair <int,string> > v;
    vector < pair <int,string> >::iterator it;
    while(n--){
            cin >> s;
            v.push_back(make_pair(s.size(),s));
    }
    sort(v.begin(),v.end());
    for(it=v.begin();it!=v.end();it++)
        cout << it->second << endl;
}
