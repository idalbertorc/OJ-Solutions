/*
        By: facug91
        From: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=412
        Name: Magic Numbers
        Date: 08/03/2016
*/

#include <bits/stdc++.h>
#define endl "\n"
#define EPS 1e-9
#define MP make_pair
#define F first
#define S second
#define DB(x) cerr << " #" << (#x) << ": " << (x)
#define DBL(x) cerr << " #" << (#x) << ": " << (x) << endl
const double PI = acos(-1.0);

#define INF 1000000000
//#define MOD 1000000007ll
//#define MAXN 1000005

using namespace std;
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> ii; typedef pair<ii, ii> iiii;
typedef vector<int> vi; typedef vector<ii> vii; typedef vector<iiii> viiii;

ll n, m;
bool use[10];

bool noRepetitions (ll n) {
	memset(use, 0, sizeof use);
	while (n) {
		if (use[n%10]) return false;
		use[n%10] = true;
		n /= 10;
	}
	return true;
}

int main () {
	#ifdef ONLINE_JUDGE
		ios_base::sync_with_stdio(0); cin.tie(0);
	#endif
	//cout<<fixed<<setprecision(3); //cerr<<fixed<<setprecision(3); //cin.ignore(INT_MAX, ' '); //cout << setfill('0') << setw(5)
	int tc = 1, i, j;
	
	cin>>tc;
	while (tc--) {
		cin>>n;
		m = 1ll;
		while (n * m <= 10000000000ll) {
			if (noRepetitions(m) && noRepetitions(m*n)) cout<<n * m<<" / "<<m<<" = "<<n<<endl;
			m++;
		}
		if (tc) cout<<endl;
	}
	
	return 0;
}
