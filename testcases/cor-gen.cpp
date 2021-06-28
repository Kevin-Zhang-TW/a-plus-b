#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb emplace_back
#define AI(i) begin(i), end(i)
template<class T> bool chmin(T &a, T b) { return b < a && (a = b, true); }
template<class T> bool chmax(T &a, T b) { return a < b && (a = b, true); }
#ifdef KEV
#define DE(args...) kout("[ " + string(#args) + " ] = ", args)
void kout() { cerr << endl; }
template<class T, class ...U> void kout(T a, U ...b) { cerr << a << ' ', kout(b...); }
template<class T> void debug(T l, T r) { while (l != r) cerr << *l << " \n"[next(l)==r], ++l; }
#else
#define DE(...) 0
#define debug(...) 0
#endif
// My bug list :
// integer overflow
// 0based, 1based forgotten
// index out of bound
// n, m, i, j typo
// some cases are missing

const int MAX_N = 300010;

const int RG = 2e9;

int32_t main() {
	ios_base::sync_with_stdio(0), cin.tie(0);

	cout << RG << ' ' << RG-1 << '\n';
}
