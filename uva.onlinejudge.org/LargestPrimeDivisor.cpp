/*
        By: facug91
        From: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2461
        Name: Largest Prime Divisor
        Date: 24/10/2015
*/
 
#include <bits/stdc++.h>
#define y1		nd03dnqwuidg1odbnw9uddu0132d
#define endl "\n"
#define EPS 1e-9
#define MP make_pair
#define F first
#define S second
#define DB(x) cerr << " #" << (#x) << ": " << (x)
#define DBL(x) cerr << " #" << (#x) << ": " << (x) << endl
const double PI = 2.0*acos(0.0);
 
#define INF 1000000000
//#define MOD 1000000007ll
//#define MAXN 10005
 
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> ii; typedef pair<int, ii> iii; typedef pair<ii, ii> iiii;
typedef vector<int> vi; typedef vector<ii> vii; typedef vector<iii> viii; typedef vector<iiii> viiii;

ll n, ip, p;
bool sieve[10000100];
vector<ll> primes, ans;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//cout<<fixed<<setprecision(2); cerr<<fixed<<setprecision(6); //cin.ignore(INT_MAX, ' '); //cout << setfill('0') << setw(5) << 25
	//cout << std::right << std::setw(13)
	int i, j;
	
	for (i=3; i<3200; i+=2) if (!sieve[i])
		for (j=i*i; j<10000100; j+=i+i)
			sieve[j] = true;
	primes.push_back(2);
	for (i=3; i<10000100; i+=2) if (!sieve[i]) primes.push_back(i);
	while (cin>>n, n) {
		n = abs(n);
		ans.clear();
		ip = 0; p = primes[ip];
		while (p*p <= n) {
			if (n % p == 0ll) ans.push_back(p);
			while (n % p == 0ll) n /= p;
			p = primes[++ip];
		}
		if (n > 1) ans.push_back(n);
		if (ans.size() > 1) cout<<ans.back()<<endl;
		else cout<<"-1"<<endl;
	}
	
	return 0;
}
