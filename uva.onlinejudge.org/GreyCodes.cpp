/*
        By: facug91
        From: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=626&page=show_problem&problem=2114
        Name: Grey Codes
        Date: 13/02/2015
*/

#include <bits/stdc++.h>
#define MAX_INT 2147483647
#define MAX_LONG 9223372036854775807ll
#define MAX_DBL 1.7976931348623158e+308
#define EPS 1e-9
const double PI = 2.0*acos(0.0);

#define INF 1000000000
//#define MOD 1000000007ll
//#define MAXN 1000005

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;

ll n, k, ans, aux;

int main () {
	ios_base::sync_with_stdio(0);
	int TC;
	
	cin>>TC;
	while (TC--) {
		cin>>n>>k;
		ans = 0ll;
		for (ll i=0ll; i<n; i++) {
			if (k < (1ll << i)) continue;
			aux = (k - (1ll << i)) % (1ll << (i + 2ll));
			if (aux < (1ll << (i + 1ll))) ans |= (1ll << i);
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
