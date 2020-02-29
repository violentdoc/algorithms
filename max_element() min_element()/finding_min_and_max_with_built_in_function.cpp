#include<bits/stdc++.h>
 
#define    pi          acos(-1) 
#define    all(x)      (x).begin(),(x).end()
#define    fill(x,y)   memset(x, y, sizeof(x))
#define    gcd(x,y)    __gcd(x,y)
#define    lcm(x,y)    (x*(y/gcd(x,y))
#define    trace(x)    cout << #x << " = " << x << endl
#define    bug         cout << "Bug check" << endl
#define    endl        '\n'
 
using namespace std; 

int main(){
	//freopen("in.txt","r", stdin);
	//freopen("out.txt","w", stdout);
 
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n;cin >> n;
	vector <int> v(n);
	int mx = INT_MIN, mn = INT_MAX;
	for(int i=0,p;i<n;i++){
		cin >> v[i];
		mx = max(mx,v[i]);
		mn = min(mn,v[i]);
	}
	cout << mx << " " << mn << endl;
	//max and min element function points to the certain element so to ptint it out we would have to dereference it
	cout << *max_element(all(v)) << " " << *min_element(all(v)) << endl;
	return 0;
}