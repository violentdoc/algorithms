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

long long bigmod(long long b,long long p,long long m){
	//to calculate (b^p)%m
	if(p==0) return 1;
	if(p&1){
		long long a = bigmod(b,p-1,m);
		return ((b%m)*(a%m))%m;
	}
	else{
		long long a = bigmod(b,p/2,m);
		return ((a%m)*(a%m))%m;
	}
}

int main(){
	long long b,p,m; cin >> b >> p >> m;
	cout << bigmod(b,p,m) << endl;
}
