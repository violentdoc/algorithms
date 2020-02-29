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

#define MAX 200050

int primes[MAX+1];

void sieve(){
	//fill(primes , 1);
	for(int i=0;i<=MAX;i++){
        primes[i]=1;
	}
	primes[0]=0;
	primes[1]=0;
	for(int i=2;i<=sqrt(MAX);i++){
		if(primes[i]==1){
			for(int j=2;i*j<=MAX;j++){
				primes[i*j]=0;
			}
		}
	}
}

int main(){
    sieve();
    int t;
	while(cin >> t && t!=0){
        if(primes[i]){
        	cout << "it's a prime" << endl;
        }
        else cout << "no it isn't" << endl;
	}
}
