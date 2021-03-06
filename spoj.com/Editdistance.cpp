/*
        By: facug91
        From: http://www.spoj.com/problems/EDIST/
        Name: Edit distance
        Number: 6219
        Date: 26/08/2014
*/

#include <bits/stdc++.h>
#define MAX_INT 2147483647
#define MAX_LONG 9223372036854775807ll
#define MAX_ULONG 18446744073709551615ull
#define MAX_DBL 1.7976931348623158e+308
#define EPS 1e-9
const double PI = 2.0*acos(0.0);

#define INF 1000000000
//#define MOD 1000000007
//#define MAXN N

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int LD[2005][2005];
string s1, s2;

int ld () {
	int i, j, size1 = (int)s1.size(), size2 = (int)s2.size();
	for (j=0; j<=size1; j++)
		LD[0][j] = j;
	for (i=0; i<=size2; i++)
		LD[i][0] = i;
	for (i=1; i<=size2; i++)
		for (j=1; j<=size1; j++)
			LD[i][j] = min(min(LD[i-1][j-1] + (s1[j-1] != s2[i-1]), LD[i-1][j] + 1), LD[i][j-1] + 1);
	return LD[size2][size1];
}

int main () {
	ios_base::sync_with_stdio(0);
	int TC, i, j;
	
	cin>>TC;
	while (TC--) {
		cin>>s1;
		cin>>s2;
		cout<<ld()<<endl;
	}
	
	return 0;
}

