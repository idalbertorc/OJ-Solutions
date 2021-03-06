/*
        By: facug91
        From: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3946
        Name: Three Families
        Date: 14/02/2015
*/

#include <bits/stdc++.h>
#define MAX_INT 2147483647
#define MAX_LONG 9223372036854775807ll
#define MAX_DBL 1.7976931348623158e+308
#define EPS 1e-9
const double PI = 2.0*acos(0.0);

#define INF 1000000000
//#define MOD 1000000007ll
#define MAXN 100005

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;

int x, y, z;

int main () {
	ios_base::sync_with_stdio(0);
	//cout << fixed << setprecision(2);
	int TC, i, j, k;
	
	cin>>TC;
	while (TC--) {
		cin>>x>>y>>z;
		cout<<((z*(x+(x-y)))/(x+y))<<endl;
	}
	
	return 0;
}
